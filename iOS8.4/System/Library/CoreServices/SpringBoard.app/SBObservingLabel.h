/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class NSString;

@interface SBObservingLabel : UILabel {

	id _object;
	NSString* _keyPath;

}

@property (assign,nonatomic) id object;                     //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
-(void)bindAttributesToObject:(id)arg1 keyPath:(id)arg2 ;
-(void)unbind;
-(void)dealloc;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

