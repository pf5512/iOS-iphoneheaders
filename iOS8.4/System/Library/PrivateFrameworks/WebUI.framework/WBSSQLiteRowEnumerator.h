/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class WBSSQLiteStatement, WBSSQLiteRow;

@interface WBSSQLiteRowEnumerator : NSEnumerator {

	WBSSQLiteStatement* _statement;
	WBSSQLiteRow* _row;
	int _lastResultCode;

}

@property (nonatomic,readonly) WBSSQLiteStatement * statement;              //@synthesize statement=_statement - In the implementation block
@property (nonatomic,readonly) int lastResultCode;                          //@synthesize lastResultCode=_lastResultCode - In the implementation block
-(id)nextObject;
-(WBSSQLiteStatement *)statement;
-(id)initWithResultsOfStatement:(id)arg1 ;
-(int)lastResultCode;
@end

