/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class NSString, UIColor, _UITableViewCellActionButton, UIVisualEffect;

@interface UITableViewRowAction : NSObject <NSCopying> {

	long long _style;
	NSString* _title;
	UIColor* _backgroundColor;
	/*^block*/id _handler;
	_UITableViewCellActionButton* _button;
	UIVisualEffect* _backgroundEffect;

}

@property (nonatomic,readonly) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (getter=_handler,nonatomic,readonly) id handler;                 //@synthesize handler=_handler - In the implementation block
+(id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(id)_initWithStyle:(id)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_button;
-(void)_setButton:(id)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(/*^block*/id)_handler;
@end

