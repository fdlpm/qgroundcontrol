/*=====================================================================
 
 QGroundControl Open Source Ground Control Station
 
 (c) 2009 - 2014 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 
 This file is part of the QGROUNDCONTROL project
 
 QGROUNDCONTROL is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 QGROUNDCONTROL is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with QGROUNDCONTROL. If not, see <http://www.gnu.org/licenses/>.
 
 ======================================================================*/

#ifndef FactPanelController_H
#define FactPanelController_H

/// @file
///     @author Don Gagne <don@thegagnes.com>

#include <QObject>
#include <QQuickItem>

#include "UASInterface.h"
#include "AutoPilotPlugin.h"
#include "UASManagerInterface.h"

/// FactPanelController is used in combination with the FactPanel Qml control for handling
/// missing Facts from C++ code.
class FactPanelController : public QObject
{
	Q_OBJECT
	
public:
	FactPanelController(void);
	
    Q_PROPERTY(QQuickItem* factPanel READ factPanel WRITE setFactPanel)
    
    QQuickItem* factPanel(void);
    void setFactPanel(QQuickItem* panel);
    
protected:
    /// Checks for existence of the specified facts
    /// @return true: all facts exists, false: facts missing and reported
    bool _allFactsExists(QStringList factList);
    
    /// Report a missing fact to the FactPanel Qml element
    void _reportMissingFact(const QString& missingFact);
    
	AutoPilotPlugin*    _autopilot;
    
private slots:
    void _checkForMissingFactPanel(void);
    
private:
    void _notifyPanelMissingFact(const QString& missingFact);

    QQuickItem*         _factPanel;
    QStringList         _delayedMissingFacts;
};

#endif