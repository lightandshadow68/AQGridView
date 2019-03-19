/*
 * AQGridViewCell+AQGridViewCellPrivate.h
 * AQGridView
 *
 * Created by Jim Dovey on 01/3/2010.
 * Copyright (c) 2010 Kobo Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * Neither the name of the project's author nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#import "AQGridViewCell.h"

enum
{
	AQGridViewCellSeparatorEdgeBottom	= (1 << 0),
	AQGridViewCellSeparatorEdgeRight	= (1 << 1)
};
typedef NSUInteger AQGridViewCellSeparatorEdge;

@interface AQGridViewCell (AQGridViewCellPrivate)

@property (nonatomic, retain) UIColor * separatorColor;
@property (nonatomic, assign) AQGridViewCellSeparatorStyle separatorStyle;
@property (nonatomic, assign) AQGridViewCellSeparatorEdge separatorEdge;

@property (nonatomic, assign) NSUInteger displayIndex;

@property (nonatomic, assign) BOOL hiddenForAnimation;

@end
