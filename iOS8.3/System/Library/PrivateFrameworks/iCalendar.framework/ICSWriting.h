/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:30:52 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICSWriting
@required
-(id)ICSStringWithOptions:(unsigned)arg1;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2;
-(id)parametersToIncludeForChecksumVersion:(int)arg1;
-(id)parametersToObscure;
-(char)shouldObscureValue;

@end

