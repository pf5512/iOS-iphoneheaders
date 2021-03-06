/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class SCNScene, SCNNode, SKScene;


@protocol SCNSceneRenderer <NSObject>
@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) BOOL jitteringEnabled; 
@property (assign,nonatomic) BOOL showsStatistics; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) void* context; 
@required
-(SCNScene *)scene;
-(void)setScene:(id)arg1;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1;
-(SCNNode *)pointOfView;
-(double)sceneTime;
-(void)setPointOfView:(id)arg1;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2;
-(void)setSceneTime:(double)arg1;
-(BOOL)isJitteringEnabled;
-(void)setJitteringEnabled:(BOOL)arg1;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
-(SCNVector3*)projectPoint:(SCNVector3)arg1;
-(SCNVector3*)unprojectPoint:(SCNVector3)arg1;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1;
-(BOOL)showsStatistics;
-(void)setShowsStatistics:(BOOL)arg1;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<SCNSceneRendererDelegate>)delegate;
-(void*)context;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1;

@end

