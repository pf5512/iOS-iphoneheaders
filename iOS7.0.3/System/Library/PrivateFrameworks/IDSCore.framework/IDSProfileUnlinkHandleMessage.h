/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSCore/IDSProfileMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface IDSProfileUnlinkHandleMessage : IDSProfileMessage <NSCopying> {

	NSString* _uri;

}

@property (setter=setURI:,copy) NSString * URI;              //@synthesize uri=_uri - In the implementation block
-(id)bagKey;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)additionalMessageHeaders;
-(BOOL)wantsSignature;
-(BOOL)wantsBodySignature;
-(id)messageBody;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(id)requiredKeys;
@end
