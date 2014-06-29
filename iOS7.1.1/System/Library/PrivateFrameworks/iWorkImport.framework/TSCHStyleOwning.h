/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCHStyleOwning <NSObject,TSCHStyleVending>
@optional
-(void)propertiesWereMutated:(id)arg1;

@required
-(id)chartInfo;
-(int)specificPropertyForGeneric:(int)arg1;
-(id)nonstyle;
-(int)defaultPropertyForGeneric:(int)arg1;
-(bool)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
-(bool)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
-(bool)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
-(id)swapTuplesForMutations:(id)arg1;
-(id)swapTuplesForMutationsForImport:(id)arg1;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
-(id)style;
-(id)context;
-(id)model;
-(id)valueForProperty:(int)arg1;
-(id)defaultProperties;
@end
