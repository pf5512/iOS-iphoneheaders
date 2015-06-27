/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPComponentWriterDelegate, TSPComponentWriteChannel, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_group;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSPComponent, NSString, TSPObject, TSPArchiverManager, NSObject, NSHashTable, NSMapTable, NSMutableDictionary;

@interface TSPComponentWriter : NSObject {

	TSPComponent* _component;
	NSString* _locator;
	TSPObject* _rootObject;
	id<TSPComponentWriterDelegate> _delegate;
	int _mode;
	unsigned char _packageIdentifier;
	id<TSPComponentWriteChannel> _writeChannel;
	TSPArchiverManager* _archiverManager;
	NSObject*<OS_dispatch_queue> _globalConcurrentQueue;
	NSObject*<OS_dispatch_semaphore> _delegateSemaphore;
	NSHashTable* _archivedObjects;
	NSMapTable* _archivedObjectsDictionary;
	NSMutableDictionary* _objectUUIDToIdentifierDictionary;
	vector<TSP::ObjectStackEntry, std::__1::allocator<TSP::ObjectStackEntry> >* _objectStack;
	NSObject*<OS_dispatch_group> _writeGroup;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSHashTable* _weakReferences;
	NSHashTable* _lazyReferences;
	NSHashTable* _dataReferences;
	unsigned long long _readVersion;
	unsigned long long _writeVersion;
	NSHashTable* _analyzedCommandToModelReferences;
	NSHashTable* _commandToModelReferences;
	NSHashTable* _newCommandToModelReferences;
	NSHashTable* _indirectCommandToModelExternalReferences;
	NSHashTable* _externalReferences;
	struct {
		unsigned success : 1;
		unsigned isErrorRecoverable : 1;
		unsigned delegateRespondsToNeedsDocumentRecovery : 1;
		unsigned delegateRespondsToLocatorForClaimingComponent : 1;
		unsigned delegateRespondsToObjectBelongsToLinkedComponent : 1;
		unsigned delegateRespondsToExternalPackageDidWriteObject : 1;
		unsigned delegateRespondsToShouldDelayWritingObject : 1;
	}  _flags;

}

@property (nonatomic,readonly) TSPComponent * component;                     //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) unsigned long long readVersion;               //@synthesize readVersion=_readVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long writeVersion;              //@synthesize writeVersion=_writeVersion - In the implementation block
-(unsigned long long)writeVersion;
-(unsigned long long)readVersion;
-(id)initWithComponent:(id)arg1 locator:(id)arg2 rootObject:(id)arg3 delegate:(id)arg4 mode:(int)arg5 packageIdentifier:(unsigned char)arg6 writeChannel:(id)arg7 archiverManager:(id)arg8 ;
-(void)writeWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)writeObjects:(id)arg1 parentObject:(id)arg2 isCommandToModelReference:(char)arg3 isAnalyzingExternalComponent:(char)arg4 completion:(/*^block*/id)arg5 ;
-(char)shouldDelayWritingObject:(id)arg1 ;
-(char)isObjectExternal:(id)arg1 parentObject:(id)arg2 validateAmbiguousObjectOwnership:(char)arg3 claimingComponent:(id*)arg4 isOwnedByDifferentPackage:(char*)arg5 ;
-(char)validateObjectContextForObject:(id)arg1 ;
-(char)shouldWriteObject:(id)arg1 ;
-(char)shouldAnalyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(char)arg2 ;
-(void)writeObject:(id)arg1 archiver:(id)arg2 parentObject:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)analyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(char)arg2 archiver:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)commandToModelReferencesToWrite;
-(void)validateAmbiguousObjectOwnershipForObject:(id)arg1 parentObject:(id)arg2 claimingComponent:(id)arg3 claimingPackageIdentifier:(unsigned char)arg4 claimingComponentWillBeLinked:(char)arg5 ;
-(void)validateExplicitComponentOwnershipForObject:(id)arg1 parentObject:(id)arg2 ;
-(void)addCommandToModelReferences:(id)arg1 parentObject:(id)arg2 ;
-(void)writeArchiver:(id)arg1 ;
-(char)canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2 ;
-(char)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg1 parentObject:(id)arg2 claimingComponent:(id*)arg3 claimingPackageIdentifier:(unsigned char*)arg4 claimingComponentWillBeLinked:(char*)arg5 ;
-(id)init;
-(TSPComponent *)component;
@end
