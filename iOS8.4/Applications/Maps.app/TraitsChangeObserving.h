/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TraitsChangeObserving <NSObject>
@property (nonatomic,readonly) SCD_Struct_MN25 mapsSizeClassPair; 
@required
-(void)addTraitsChangeObserver:(id)arg1 willChangeHandler:(/*^block*/id)arg2 changeHandler:(/*^block*/id)arg3 didChangeHandler:(/*^block*/id)arg4;
-(void)removeTraitsChangeObserver:(id)arg1;
-(SCD_Struct_MN25)mapsSizeClassPair;

@end
