/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>
#import <UIKit/NSSecureCoding.h>

@class NSArray, NSString;

@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldDismiss;
	BOOL _shouldAdvanceInputMode;
	BOOL _requiresInputManagerSync;
	BOOL _shouldAdvanceResponder;
	BOOL _shouldPostReturnKeyNotification;
	NSArray* _keyboardOutputs;
	NSString* _primaryLanguage;

}

@property (nonatomic,retain) NSArray * keyboardOutputs;                         //@synthesize keyboardOutputs=_keyboardOutputs - In the implementation block
@property (assign,nonatomic) BOOL shouldDismiss;                                //@synthesize shouldDismiss=_shouldDismiss - In the implementation block
@property (assign,nonatomic) BOOL shouldAdvanceInputMode;                       //@synthesize shouldAdvanceInputMode=_shouldAdvanceInputMode - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguage;                          //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (assign,nonatomic) BOOL requiresInputManagerSync;                     //@synthesize requiresInputManagerSync=_requiresInputManagerSync - In the implementation block
@property (assign,nonatomic) BOOL shouldAdvanceResponder;                       //@synthesize shouldAdvanceResponder=_shouldAdvanceResponder - In the implementation block
@property (assign,nonatomic) BOOL shouldPostReturnKeyNotification;              //@synthesize shouldPostReturnKeyNotification=_shouldPostReturnKeyNotification - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(NSString *)primaryLanguage;
-(void)setShouldPostReturnKeyNotification:(BOOL)arg1 ;
-(BOOL)requiresInputManagerSync;
-(void)setRequiresInputManagerSync:(BOOL)arg1 ;
-(void)setShouldAdvanceResponder:(BOOL)arg1 ;
-(NSArray *)keyboardOutputs;
-(void)setKeyboardOutputs:(NSArray *)arg1 ;
-(BOOL)shouldAdvanceResponder;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(BOOL)shouldPostReturnKeyNotification;
-(BOOL)shouldAdvanceInputMode;
-(BOOL)shouldDismiss;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1 ;
-(void)setShouldDismiss:(BOOL)arg1 ;
-(void)setShouldAdvanceInputMode:(BOOL)arg1 ;
-(void)_pushNewKeyboardOutput;
-(id)_currentKeyboardOutput;
@end

