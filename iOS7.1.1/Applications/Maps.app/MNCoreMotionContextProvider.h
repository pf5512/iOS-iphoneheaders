/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MNMotionContextProvider.h>

@protocol MNMotionContextProviderDelegate;
@class CMActivityManager;

@interface MNCoreMotionContextProvider : NSObject <MNMotionContextProvider> {

	CMActivityManager* _activityManager;
	<MNMotionContextProviderDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <MNMotionContextProviderDelegate> * motionDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stopMotionUpdates;
-(id)motionDelegate;
-(void)startMotionUpdates;
-(void)setMotionDelegate:(id)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
@end

