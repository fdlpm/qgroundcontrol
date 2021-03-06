#-------------------------------------------------
#
# QGroundControl - Micro Air Vehicle Groundstation
# 
# Please see our website at <http://qgroundcontrol.org>
#
# Author:
# Lorenz Meier <mavteam@student.ethz.ch>
# 
# (c) 2009-2010 PIXHAWK Team
#
# This file is part of the mav groundstation project
# QGroundControl is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# QGroundControl is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
# You should have received a copy of the GNU General Public License
# along with QGroundControl. If not, see <http://www.gnu.org/licenses/>.
#
#-------------------------------------------------

# Specify the MAVLink dialect to compile support for here. This variable is processed
# by QGCExternalLibs.pri, which handles MAVLink configuration. The dialect should 
# correspond to an include folder under `libs/mavlink/include/mavlink/v1.0`. You can
# also force a build to use only common mavlink message by setting MAVLINK_CONF to empty here.
MAVLINK_CONF = firebird

# Override compilation of QGroundControl's features in your build. This overrides the default
# options for QGroundControl. To see what those are, refer to README.md.
# This should be a space-separated list of the constants specified in README.md.
# Uncomment the following line and replace DISABLE_XBEE with any features to override.
#DEFINES = DISABLE_XBEE