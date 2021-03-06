/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSURL, SSURLBag;

@interface SBKSyncBagContext : NSObject <NSCopying> {

	BOOL _domainDisabled;
	NSString* _domain;
	NSURL* _syncRequestURL;
	SSURLBag* _bag;
	double _pollingIntervalInSeconds;

}

@property (readonly) NSString * domain;                                        //@synthesize domain=_domain - In the implementation block
@property (retain) NSURL * syncRequestURL;                                     //@synthesize syncRequestURL=_syncRequestURL - In the implementation block
@property (getter=isDomainDisabled,readonly) BOOL domainDisabled;              //@synthesize domainDisabled=_domainDisabled - In the implementation block
@property (assign) double pollingIntervalInSeconds;                            //@synthesize pollingIntervalInSeconds=_pollingIntervalInSeconds - In the implementation block
@property (retain) SSURLBag * bag;                                             //@synthesize bag=_bag - In the implementation block
+(void)loadBagContextFromURLBag:(id)arg1 domain:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
+(void)_findFirstValueInBag:(id)arg1 keyEnumerator:(id)arg2 valueTransformer:(/*^block*/ id)arg3 defaultValue:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(id)init;
-(id)description;
-(id)domain;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isDomainDisabled;
-(double)pollingIntervalInSeconds;
-(id)syncRequestURL;
-(id)initWithBag:(id)arg1 domain:(id)arg2 ;
-(id)_initWithDomain:(id)arg1 syncRequestURL:(id)arg2 domainDisabled:(BOOL)arg3 ;
-(void)setDomainDisabled:(BOOL)arg1 ;
-(void)setIsDomainDisabled:(BOOL)arg1 ;
-(void)setPollingIntervalInSeconds:(double)arg1 ;
-(void)setSyncRequestURL:(id)arg1 ;
-(id)bag;
-(void)setBag:(id)arg1 ;
-(void).cxx_destruct;
@end

