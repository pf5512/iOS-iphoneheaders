/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKEventPredicate.h>
#import <EventKit/NSSecureCoding.h>

@class NSString;

@interface EKCalendarItemsWithExternalIdentifierPredicate : EKEventPredicate <NSSecureCoding> {

	NSString* _externalIdentifier;

}
+(BOOL)supportsSecureCoding;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
@end

