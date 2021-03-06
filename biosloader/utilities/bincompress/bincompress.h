//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
//------------------------------------------------------------------------------
//
//  THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//  ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//  PARTICULAR PURPOSE.
//
//------------------------------------------------------------------------------

//
// Defines constants used by bincompress. Include this file
// in the BIOS loader decompression module to keep the constants in sync.
//

#ifndef _BINCOMPRESS_H
#define _BINCOMPRESS_H

#include "bc.h"

// Work buffers
extern CHAR originalData[];
extern CHAR encodedData[];

void CompressionStartMessage();
void CompressionProgressMessage(double progress);
void CompressionEndMessage(int inFileSize, int outFileSize);

void DecompressionStartMessage();
void DecompressionProgressMessage(double progress);
void DecompressionEndMessage(int inFileSize, int outFileSize);

#endif
