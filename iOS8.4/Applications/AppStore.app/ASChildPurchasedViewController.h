/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class ASPurchasedPage;


@protocol ASChildPurchasedViewController <NSObject>
@property (assign,nonatomic,__weak) id<ASChildPurchasedViewControllerDelegate> delegate; 
@property (nonatomic,retain) ASPurchasedPage * page; 
@required
-(void)setDelegate:(id)arg1;
-(id<ASChildPurchasedViewControllerDelegate>)delegate;
-(ASPurchasedPage *)page;
-(void)setPage:(id)arg1;

@end

