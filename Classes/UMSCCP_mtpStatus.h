//
//  UMSCCP_mtpStatus.h
//  ulibsccp
//
//  Created by Andreas Fink on 05.04.16.
//  Copyright (c) 2016 Andreas Fink
//
// This source is dual licensed either under the GNU GENERAL PUBLIC LICENSE
// Version 3 from 29 June 2007 and other commercial licenses available by
// the author.

#import <ulib/ulib.h>
#import <ulibmtp3/ulibmtp3.h>

@class UMLayerSCCP;

@interface UMSCCP_mtpStatus : UMLayerTask
{
    UMMTP3PointCode *affectedPointCode;
    int si;
    int ni;
    NSDictionary *options;
    int status;
}

- (UMSCCP_mtpStatus *)initForSccp:(UMLayerSCCP *)layer
                             mtp3:(UMLayerMTP3 *)mtp3
                affectedPointCode:(UMMTP3PointCode *)affPC
                           status:(int)status
                               si:(int)xsi
                               ni:(int)xni
                          options:(NSDictionary *)xoptions;


@end
