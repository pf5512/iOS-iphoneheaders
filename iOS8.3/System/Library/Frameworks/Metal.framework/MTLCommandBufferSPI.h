/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:01:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDictionary;


@protocol MTLCommandBufferSPI <MTLCommandBuffer>
@property (getter=isProfilingEnabled) char profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@optional
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned)arg3;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned)arg2;
-(id)debugCommandEncoder;

@required
-(char)isProfilingEnabled;
-(void)setProfilingEnabled:(char)arg1;
-(NSDictionary *)profilingResults;

@end

