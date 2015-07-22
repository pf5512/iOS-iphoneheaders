/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol NotesTextureScrolling;
@class NSLayoutConstraint;

@interface NotesScrollView : UIScrollView {

	id<NotesTextureScrolling> _textureScrollingDelegate;
	NSLayoutConstraint* _contentHeightConstraint;
	NSLayoutConstraint* _contentWidthConstraint;

}

@property (__weak) id<NotesTextureScrolling> textureScrollingDelegate;                  //@synthesize textureScrollingDelegate=_textureScrollingDelegate - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentHeightConstraint;              //@synthesize contentHeightConstraint=_contentHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentWidthConstraint;               //@synthesize contentWidthConstraint=_contentWidthConstraint - In the implementation block
-(id<NotesTextureScrolling>)textureScrollingDelegate;
-(NSLayoutConstraint *)contentWidthConstraint;
-(void)setTextureScrollingDelegate:(id<NotesTextureScrolling>)arg1 ;
-(void)setContentWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)commonInit;
-(void)setContentHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentHeightConstraint;
@end
