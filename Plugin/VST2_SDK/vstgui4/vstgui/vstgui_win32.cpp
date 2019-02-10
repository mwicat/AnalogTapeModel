//-----------------------------------------------------------------------------
// VST Plug-Ins SDK
// VSTGUI: Graphical User Interface Framework for VST plugins
//
// Version 4.2
//
//-----------------------------------------------------------------------------
// VSTGUI LICENSE
// (c) 2013, Steinberg Media Technologies, All Rights Reserved
//-----------------------------------------------------------------------------
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
// 
//   * Redistributions of source code must retain the above copyright notice, 
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation 
//     and/or other materials provided with the distribution.
//   * Neither the name of the Steinberg Media Technologies nor the names of its
//     contributors may be used to endorse or promote products derived from this 
//     software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
// IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
// OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE  OF THIS SOFTWARE, EVEN IF ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGE.
//-----------------------------------------------------------------------------

#pragma warning (disable : 4996) // deprecated insecure calls (strcpy, memset etc)

#include "vstgui.cpp"

#include "lib/platform/win32/cfontwin32.cpp"
#include "lib/platform/win32/gdiplusbitmap.cpp"
#include "lib/platform/win32/gdiplusdrawcontext.cpp"
#include "lib/platform/win32/gdiplusgraphicspath.cpp"
#include "lib/platform/win32/win32dragcontainer.cpp"
#include "lib/platform/win32/win32frame.cpp"
#include "lib/platform/win32/win32openglview.cpp"
#include "lib/platform/win32/win32optionmenu.cpp"
#include "lib/platform/win32/win32support.cpp"
#include "lib/platform/win32/win32textedit.cpp"
#include "lib/platform/win32/winfileselector.cpp"
#include "lib/platform/win32/winstring.cpp"
#include "lib/platform/win32/direct2d/d2dbitmap.cpp"
#include "lib/platform/win32/direct2d/d2ddrawcontext.cpp"
#include "lib/platform/win32/direct2d/d2dfont.cpp"
#include "lib/platform/win32/direct2d/d2dgraphicspath.cpp"