/*
 * This file is part of Blackvoxel.
 *
 * Copyright 2010-2014 Laurent Thiebaut & Olivia Merle
 *
 * Blackvoxel is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Blackvoxel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/*
 * ZGui_Disassembler.h
 *
 *  Created on: 20 déc. 2014
 *      Author: laurent
 */

#ifndef Z_ZGUI_DISASSEMBLER_H
#define Z_ZGUI_DISASSEMBLER_H

//#ifndef Z_ZGUI_DISASSEMBLER_H
//#  include "ZGui_Disassembler.h"
//#endif

#ifndef Z_ZSTRING_H
#  include "z/ZString.h"
#endif

#ifndef Z_ZGUI_H
#  include "ZGui.h"
#endif

#ifndef Z_GUI_FONTFRAME_H
#  include "ZGui_FontFrame.h"
#endif


class ZVMachine;

#define ZDISASSEMBLERFRAME_MAXLINECOUNT 64

class ZDisassemblerFrame : public ZFrame
{
    ZGame * GameEnv;
    ZVMachine * VMachine;
    ZFrame_FontFrame Display[ZDISASSEMBLERFRAME_MAXLINECOUNT];
    ZString          DisplayText[ZDISASSEMBLERFRAME_MAXLINECOUNT];
    float Margin;
    ULong LineHeight;
    ULong LineCount;
  public:

    ZDisassemblerFrame ()
    {
      FrameType = MulticharConst('D','A','S','M');
      VMachine = 0;
      Margin = 2.0f;
      LineHeight = 12.0;
      LineCount = ZDISASSEMBLERFRAME_MAXLINECOUNT;
      GameEnv = 0;
    }

    virtual void AddedToFrameCallback(ZFrame * Frame);

    void SetVMachine(ZVMachine * VMachine) {this->VMachine = VMachine;}

    void SetGameEnv(ZGame * GameEnv) { this->GameEnv = GameEnv; }

    virtual void SetSize    (float Width, float Height);

    virtual void Render(Frame_Dimensions * ParentPosition);
};

#endif /* Z_ZGUI_DISASSEMBLER_H */
