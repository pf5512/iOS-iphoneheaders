/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAsset.h>
#import <UIKit/UIActivityItemSource.h>

@class NSURL, NSDate, NSError, UIImage, NSString, NSDictionary, NSNumber, PLCloudFeedAssetsEntry, NSOrderedSet, CLLocation, NSMutableOrderedSet, NSData, NSMutableSet, NSArray, NSSet;

@interface PLManagedAsset : _PLManagedAsset <UIActivityItemSource> {

	BOOL _didPrepareForDeletion;
	BOOL _isRegisteredForChanges;
	BOOL _needsMomentUpdate;
	BOOL _disableDupeAnalysis;
	BOOL _disableFileSystemPersistency;
	BOOL _didPersistAvalanche;
	NSURL* cachedNonPersistedVideoPlaybackURL;
	NSDate* cachedNonPersistedVideoPlaybackURLExpiration;
	NSError* cachedNonPersistedVideoPlaybackURLError;
	UIImage* inflightImageInMemory;
	NSString* inflightImagePath;
	UIImage* inflightIndexSheetImage;
	NSDictionary* inflightMetadata;

}

@property (nonatomic,@dynamic,retain) NSString * cloudBatchID; 
@property (nonatomic,@dynamic,retain) NSDate * cloudBatchPublishDate; 
@property (nonatomic,@dynamic,retain) NSDate * cloudServerPublishDate; 
@property (nonatomic,@dynamic,retain) NSString * cloudAssetGUID; 
@property (nonatomic,@dynamic,retain) NSString * cloudCollectionGUID; 
@property (nonatomic,@dynamic,retain) NSDictionary * cloudMetadata; 
@property (nonatomic,@dynamic,retain) NSNumber * cloudHasUnseenComments; 
@property (assign) BOOL cloudHasUnseenCommentsBoolValue; 
@property (nonatomic,@dynamic,retain) NSNumber * cloudHasCommentsByMe; 
@property (assign) BOOL cloudHasCommentsByMeBoolValue; 
@property (nonatomic,@dynamic,retain) NSDate * cloudLastViewedCommentDate; 
@property (nonatomic,@dynamic,retain) PLCloudFeedAssetsEntry * cloudFeedAssetsEntry; 
@property (nonatomic,@dynamic,retain) NSString * cloudOwnerHashedPersonID; 
@property (nonatomic,@dynamic,retain) NSNumber * cloudIsDeletable; 
@property (assign) BOOL cloudIsDeletableBoolValue; 
@property (nonatomic,@dynamic,retain) NSNumber * cloudIsMyAsset; 
@property (assign) BOOL cloudIsMyAssetBoolValue; 
@property (nonatomic,@dynamic,retain) NSNumber * cloudDownloadRequests; 
@property (nonatomic,readonly) NSString * cloudOwnerEmail; 
@property (nonatomic,readonly) NSString * cloudOwnerFullName; 
@property (nonatomic,readonly) NSString * cloudOwnerFirstName; 
@property (nonatomic,readonly) NSString * cloudOwnerLastName; 
@property (nonatomic,@dynamic,retain) NSNumber * cloudHasCommentsConversation; 
@property (assign) BOOL cloudHasCommentsConversationBoolValue; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * cloudComments; 
@property (nonatomic,@dynamic,retain) NSOrderedSet * likeComments; 
@property (nonatomic,readonly) unsigned totalCommentsCount; 
@property (assign,nonatomic) int cloudPlaceholderKindValue; 
@property (assign,nonatomic) BOOL userCloudSharedLiked; 
@property (assign,nonatomic) int highDynamicRangeTypeValue; 
@property (assign,nonatomic) int savedAssetTypeValue; 
@property (nonatomic,retain) CLLocation * location; 
@property (assign) unsigned effectiveThumbnailIndex; 
@property (nonatomic,@dynamic,readonly) NSMutableOrderedSet * adjustments; 
@property (nonatomic,retain) PLManagedAsset * originalAsset; 
@property (assign,nonatomic) BOOL isInFlight; 
@property (nonatomic,readonly) UIImage * inflightImage; 
@property (nonatomic,retain) UIImage * inflightImageInMemory; 
@property (nonatomic,retain) NSString * inflightImagePath; 
@property (nonatomic,retain) UIImage * inflightIndexSheetImage; 
@property (nonatomic,retain) NSDictionary * inflightMetadata; 
@property (assign,nonatomic) int avalanchePickTypeValue; 
@property (nonatomic,readonly) BOOL hasEmbeddedThumbnail; 
@property (nonatomic,readonly) NSData * embeddedThumbnailData; 
@property (nonatomic,retain) NSNumber * embeddedThumbnailOffset; 
@property (assign) int embeddedThumbnailOffsetValue; 
@property (nonatomic,retain) NSNumber * embeddedThumbnailLength; 
@property (assign) int embeddedThumbnailLengthValue; 
@property (nonatomic,retain) NSNumber * embeddedThumbnailWidth; 
@property (assign) short embeddedThumbnailWidthValue; 
@property (nonatomic,retain) NSNumber * embeddedThumbnailHeight; 
@property (assign) short embeddedThumbnailHeightValue; 
@property (nonatomic,@dynamic,retain) NSMutableSet * faces; 
@property (assign,nonatomic) short assetKind; 
@property (assign,nonatomic) short assetKindSubtype; 
@property (assign,nonatomic) double captureTime; 
@property (assign,nonatomic) CGSize imageSize; 
@property (assign,nonatomic) double recordModDate; 
@property (assign,nonatomic) SCD_Struct_PL9 gpsCoordinate; 
@property (nonatomic,readonly) BOOL hasLocationInfo; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) BOOL isPhotoStreamPhoto; 
@property (nonatomic,readonly) BOOL isUsedByiPhoto; 
@property (nonatomic,readonly) BOOL isCloudSharedAsset; 
@property (nonatomic,readonly) <PLCloudSharedAlbumProtocol> * cloudShareAlbum; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL isStreamedVideo; 
@property (nonatomic,readonly) BOOL isHDVideo; 
@property (nonatomic,readonly) BOOL isMogul; 
@property (nonatomic,readonly) BOOL isPhoto; 
@property (nonatomic,readonly) BOOL isAudio; 
@property (assign,nonatomic) short visibilityStateValue; 
@property (nonatomic,readonly) BOOL allowsWallpaperEditing; 
@property (assign,nonatomic) BOOL needsMomentUpdate;                                               //@synthesize needsMomentUpdate=_needsMomentUpdate - In the implementation block
@property (assign,nonatomic) BOOL disableDupeAnalysis;                                             //@synthesize disableDupeAnalysis=_disableDupeAnalysis - In the implementation block
@property (assign,nonatomic) BOOL disableFileSystemPersistency;                                    //@synthesize disableFileSystemPersistency=_disableFileSystemPersistency - In the implementation block
@property (nonatomic,readonly) NSArray * sortedSidecarFiles; 
@property (nonatomic,copy) NSString * utiType; 
@property (nonatomic,readonly) NSString * mimeType; 
@property (nonatomic,readonly) BOOL isJPEG; 
@property (nonatomic,readonly) NSURL * mainFileURL; 
@property (nonatomic,readonly) NSString * pathForImageFile; 
@property (nonatomic,readonly) NSSet * allFileURLs; 
@property (nonatomic,readonly) NSSet * filePathsWithoutThumbs; 
@property (nonatomic,readonly) NSString * pathForLargeThumbnailFile; 
@property (nonatomic,readonly) NSString * pathForOriginalFile; 
@property (nonatomic,readonly) NSURL * fileURLForLargeThumbnailFile; 
@property (nonatomic,readonly) NSArray * allUniformTypeIdentifiers; 
@property (nonatomic,readonly) NSString * fileExtension; 
@property (nonatomic,readonly) NSString * pathForMetadataDirectory; 
@property (nonatomic,readonly) NSURL * fileURLForThumbnailFile; 
@property (nonatomic,readonly) NSString * pathForPrebakedThumbnail; 
@property (nonatomic,readonly) NSString * pathForPrebakedLandscapeScrubberThumbnails; 
@property (nonatomic,readonly) NSURL * fileURLForPrebakedLandscapeScrubberThumbnails; 
@property (nonatomic,readonly) NSString * pathForPrebakedPortraitScrubberThumbnails; 
@property (nonatomic,readonly) NSURL * fileURLForPrebakedPortraitScrubberThumbnails; 
@property (nonatomic,readonly) NSString * pathForPrebakedWildcatThumbnailsFile; 
@property (nonatomic,readonly) NSString * pathForTrimmedVideoFile; 
@property (nonatomic,readonly) NSString * pathForVideoPreviewFile; 
@property (nonatomic,readonly) NSString * pathForVideoFile; 
@property (nonatomic,readonly) NSString * pathForLargeDisplayableImageFile; 
@property (nonatomic,readonly) NSString * pathForMediumThumbnailFile; 
@property (nonatomic,readonly) NSString * pathForXMPFile; 
@property (nonatomic,readonly) NSString * pathForFlattenedVideoFile; 
@property (nonatomic,readonly) NSString * pathForSlalomRegionsArchive; 
@property (nonatomic,readonly) BOOL hasSlalomRegions; 
@property (nonatomic,readonly) NSArray * slalomRegions; 
@property (nonatomic,readonly) NSString * textBadgeString; 
@property (nonatomic,retain) NSURL * cachedNonPersistedVideoPlaybackURL; 
@property (nonatomic,retain) NSDate * cachedNonPersistedVideoPlaybackURLExpiration; 
@property (nonatomic,retain) NSError * cachedNonPersistedVideoPlaybackURLError; 
@property (nonatomic,readonly) UIImage * wallpaperFullScreenImage; 
@property (nonatomic,readonly) NSURL * assetURL; 
@property (assign) int thumbnailIndex; 
+(unsigned)countUsedAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2 ;
+(id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 ;
+(id)assetsWithUUIDs:(id)arg1 includePendingChanges:(BOOL)arg2 inLibrary:(id)arg3 ;
+(id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageSource:(CGImageSource*)arg5 imageData:(id*)arg6 ;
+(id)assetWithUUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3 ;
+(int)indexSheetBakedFormat;
+(int)thumbnailFormat;
+(int)wildcatStackFormat;
+(id)preferredFileExtensionForType:(id)arg1 ;
+(void)extractDirectory:(id*)arg1 andFilename:(id*)arg2 fromMainFileURL:(id)arg3 ;
+(id)extensionForMediumThumbnailFile;
+(id)diagnosticFilePathForMainFilePath:(id)arg1 ;
+(id)assetsWithUUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)uniformTypeIdentifierFromPathExtension:(id)arg1 assetType:(short)arg2 ;
+(short)assetTypeFromUniformTypeIdentifier:(id)arg1 ;
+(id)slalomRegionsPathForMainFilePath:(id)arg1 ;
+(int)wildcatIndexSheetFormat;
+(int)masterThumbnailFormat;
+(int)fullSizeImageFormat;
+(int)formatForThumbnailGeneration;
+(int)posterThumbnailFormat;
+(int)indexSheetUnbakedFormat;
+(id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)locationFromLocationData:(id)arg1 ;
+(id)_insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageSource:(CGImageSource*)arg5 imageData:(id*)arg6 isPlaceholder:(BOOL)arg7 ;
+(id)bestCreationDateForAssetAtURL:(id)arg1 modificationDate:(id*)arg2 creationDateString:(id*)arg3 ;
+(id)abbreviatedMetadataDirectoryForDirectory:(id)arg1 ;
+(id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(BOOL)arg2 ;
+(SCD_Struct_PL9)locationFromImageProperties:(id)arg1 ;
+(SCD_Struct_PL9)locationFromAVAsset:(id)arg1 ;
+(id)extensionForLargeThumbnailFile;
+(id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id*)arg3 ;
+(id)uuidFromAssetURL:(id)arg1 fileExtension:(id*)arg2 sidecarIndex:(id*)arg3 ;
+(id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2 ;
+(id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(int)arg3 replacementUUID:(id)arg4 imageSource:(CGImageSource*)arg5 imageData:(id*)arg6 isPlaceholder:(BOOL)arg7 ;
+(unsigned)countAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2 ;
+(id)assetsWithSavedAssetType:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)incompleteAssetsInManagedObjectContext:(id)arg1 ;
+(id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingAssetKind;
+(id)keyPathsForValuesAffectingCaptureTime;
+(id)keyPathsForValuesAffectingImageSize;
+(id)keyPathsForValuesAffectingRecordModDate;
+(id)keyPathsForValuesAffectingGpsCoordinate;
+(id)keyPathsForValuesAffectingHasLocationInfo;
+(id)keyPathsForValuesAffectingDate;
+(id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+(id)keyPathsForValuesAffectingIsVideo;
+(id)keyPathsForValuesAffectingIsPhoto;
+(id)keyPathsForValuesAffectingIsAudio;
+(id)keyPathsForValuesAffectingUtiType;
+(id)keyPathsForValuesAffectingMimeType;
+(id)keyPathsForValuesAffectingIsJPEG;
+(BOOL)isValidFileExtensionForImport:(id)arg1 ;
+(int)feedEntryThumbnailFormat;
+(int)portraitScrubberThumbnailFormat;
+(int)landscapeScrubberThumbnailFormat;
+(int)wildcatPhotoScrubberFormat;
+(int)wildcatCachedStackImageFormat;
+(id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2 ;
+(id)uuidFromAssetURL:(id)arg1 ;
+(id)recentlyUsedGUIDsPath;
+(id)persistedRecentlyUsedGUIDS;
+(id)allCloudSharedAssetsInLibrary:(id)arg1 ;
+(id)cloudSharedAssetsWithGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)sortedCloudSharedAssetsWithPlaceholderKind:(int)arg1 ascending:(BOOL)arg2 inLibrary:(id)arg3 ;
+(void)markAssetAsRecentlyUsed:(id)arg1 ;
-(void)dealloc;
-(id)date;
-(BOOL)isEditable;
-(CGSize)imageSize;
-(id)location;
-(id)mimeType;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(BOOL)isVideo;
-(id)cloudOwnerFirstName;
-(id)cloudOwnerLastName;
-(id)cloudOwnerFullName;
-(id)cloudOwnerEmail;
-(BOOL)canPerformEditOperation:(int)arg1 ;
-(void)delete;
-(BOOL)isPhotoStreamPhoto;
-(BOOL)isCloudSharedAsset;
-(id)cloudShareAlbum;
-(BOOL)isAvalancheStackPhoto;
-(BOOL)isAvalanchePhoto;
-(int)savedAssetTypeValue;
-(id)assetURLWithExtension:(id)arg1 ;
-(id)assetURL;
-(id)pathForMetadataDirectory;
-(id)pathForVideoPreviewFile;
-(id)fileURLForThumbnailFile;
-(BOOL)isPhoto;
-(id)pathForLargeThumbnailFile;
-(void)setEffectiveThumbnailIndex:(unsigned)arg1 ;
-(id)pathForOriginalFile;
-(void)setThumbnailDataFromImageProperties:(id)arg1 ;
-(void)setLocationFromImageProperties:(id)arg1 ;
-(void)setOriginalAsset:(id)arg1 ;
-(id)fileURLForSidecarFile:(id)arg1 ;
-(void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1 ;
-(void)setDisableFileSystemPersistency:(BOOL)arg1 ;
-(void)setPublicGlobalUUID:(id)arg1 ;
-(void)generateAndUpdateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 fromImageSource:(CGImageSourceRef)arg3 imageData:(id)arg4 thumbnailDataByFormatID:(CFDictionaryRef)arg5 updateExistingLargePreview:(BOOL)arg6 ;
-(BOOL)avalanchePickTypeIsVisible;
-(void)persistMetadataToFilesystem;
-(id)mainFileURL;
-(id)addFaceWithRelativeRect:(CGRect)arg1 identifier:(short)arg2 albumUUID:(id)arg3 ;
-(unsigned)effectiveThumbnailIndex;
-(id)pathForVideoFile;
-(short)visibilityStateValue;
-(void)setVisibilityStateValue:(short)arg1 ;
-(int)avalanchePickTypeValue;
-(void)setNeedsMomentUpdate:(BOOL)arg1 ;
-(void)generateLargeThumbnailFileIfNecessary;
-(id)utiType;
-(BOOL)setVideoInfoFromFileAtURL:(id)arg1 ;
-(id)pathForImageFile;
-(BOOL)isInFlight;
-(void)setInflightImagePath:(id)arg1 ;
-(void)setInflightImageInMemory:(id)arg1 ;
-(void)setSavedAssetTypeValue:(int)arg1 ;
-(void)setAssetKind:(short)arg1 ;
-(void)setAssetKindSubtype:(short)arg1 ;
-(void)setUniformTypeIdentifierFromPathExtension:(id)arg1 ;
-(void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1 ;
-(void)setInflightMetadata:(id)arg1 ;
-(void)setAvalanchePickTypeValue:(int)arg1 ;
-(id)imageWithFormat:(int)arg1 outImageProperties:(const _CFDictionary*)arg2 ;
-(id)imageWithFormat:(int)arg1 ;
-(id)reservedPathForLargeDisplayableImageFileForceLarge:(BOOL)arg1 ;
-(BOOL)isJPEG;
-(id)indexSheetImage;
-(id)thumbnailIdentifier;
-(BOOL)isStreamedVideo;
-(BOOL)isCloudPlaceholder;
-(id)fileURLForLargeThumbnailFile;
-(void)awakeFromInsert;
-(void)didSave;
-(void)registerForChanges;
-(void)unregisterForChanges;
-(void)awakeFromSnapshotEvents:(unsigned)arg1 ;
-(void)setIsInFlight:(BOOL)arg1 ;
-(void)setHighDynamicRangeTypeValue:(int)arg1 ;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(int)thumbnailIndex;
-(void)setThumbnailIndex:(int)arg1 ;
-(void)prepareForDeletion;
-(void)willSave;
-(BOOL)isPanorama;
-(BOOL)_hasPanoramaDimensions;
-(void)_persistAvalancheToFilesystem;
-(id)_serializedPropertyDataFromFilter:(id)arg1 ;
-(id)_settingsDictionaryFromFilter:(id)arg1 ;
-(id)_settingsDictionaryFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
-(id)addAdjustment;
-(id)cachedNonPersistedVideoPlaybackURLExpiration;
-(void)setInflightIndexSheetImage:(id)arg1 ;
-(id)inflightImageInMemory;
-(id)inflightImagePath;
-(id)inflightIndexSheetImage;
-(id)inflightMetadata;
-(id)pathForLargeDisplayableImageFile;
-(id)filteredImage:(id)arg1 withCIContext:(id)arg2 ;
-(int)highDynamicRangeTypeValue;
-(id)_kindDescription;
-(id)_savedAssetTypeDescription;
-(id)_highDynamicRangeTypeDescription;
-(BOOL)_isSavedAssetTypeValueValid:(int)arg1 ;
-(int)embeddedThumbnailLengthValue;
-(int)embeddedThumbnailOffsetValue;
-(id)embeddedThumbnailOffset;
-(void)setEmbeddedThumbnailOffset:(id)arg1 ;
-(id)embeddedThumbnailLength;
-(void)setEmbeddedThumbnailLength:(id)arg1 ;
-(id)embeddedThumbnailWidth;
-(void)setEmbeddedThumbnailWidth:(id)arg1 ;
-(id)embeddedThumbnailHeight;
-(void)setEmbeddedThumbnailHeight:(id)arg1 ;
-(BOOL)setAttributesFromMainFileURL:(id)arg1 savedAssetType:(int)arg2 imageSource:(CGImageSource*)arg3 imageData:(id*)arg4 ;
-(void)updateAssetKindFromUniformTypeIdentifier;
-(short)assetKind;
-(void)setSizeAndOrientationFromImageProperties:(id)arg1 ;
-(void)setSavedAssetTypeFromImageProperties:(id)arg1 ;
-(BOOL)isAudio;
-(id)pathForDiagnosticFile;
-(id)pathForSlalomRegionsArchive;
-(void)setGpsCoordinate:(SCD_Struct_PL9)arg1 ;
-(void)generateThumbnailsWithImageSource:(CGImageSourceRef)arg1 imageData:(id)arg2 updateExistingLargePreview:(BOOL)arg3 allowMediumPreview:(BOOL)arg4 outSmallThumbnail:(id*)arg5 outLargeThumbnail:(id*)arg6 ;
-(short)assetKindSubtype;
-(BOOL)cloudIsMyAssetBoolValue;
-(int)cloudPlaceholderKindValue;
-(void)setUtiType:(id)arg1 ;
-(id)fileURLForMediumThumbnailFile;
-(id)fileURLForPrebakedLandscapeScrubberThumbnails;
-(id)fileURLForPrebakedPortraitScrubberThumbnails;
-(id)pathForMetadataWithExtension:(id)arg1 ;
-(id)fileURLForMetadataWithExtension:(id)arg1 ;
-(id)sortedSidecarFiles;
-(id)pathForMediumThumbnailFile;
-(BOOL)_deviceSupportsMogul;
-(BOOL)isMogul;
-(id)slalomRegionsUseDefaults:(BOOL)arg1 ;
-(BOOL)_isValidUTI:(id)arg1 forService:(id)arg2 ;
-(id)inflightImage;
-(id)newFullScreenImage:(const _CFDictionary*)arg1 ;
-(void)getLargestAvailableDataRepresentation:(id*)arg1 type:(id*)arg2 ;
-(id)largestAvailableDataRepresentationAndType:(id*)arg1 ;
-(id)allFileExtensions;
-(id)assetURLForSidecarFile:(id)arg1 ;
-(id)fileExtension;
-(id)pasteBoardRepresentation;
-(BOOL)hasThumbnail;
-(BOOL)isLocatedAtCoordinates:(SCD_Struct_PL9)arg1 ;
-(id)avalanchePickDescription;
-(BOOL)isEditableFromAssetsLibrary;
-(BOOL)isDeletableFromAssetsLibrary;
-(void)deleteFromDatabaseOnly;
-(id)adjustmentsXMPRepresentation;
-(id)originalAsset;
-(BOOL)hasGPS;
-(id)cachedNonPersistedVideoPlaybackURL;
-(id)pathToOriginalVideoFile;
-(id)_compactDebugDescription;
-(id)_prettyDescription;
-(void)setPersistedFileSystemAttributes;
-(id)faceWithIdentifier:(short)arg1 ;
-(BOOL)hasEmbeddedThumbnail;
-(id)embeddedThumbnailData;
-(void)setEmbeddedThumbnailOffsetValue:(int)arg1 ;
-(void)setEmbeddedThumbnailLengthValue:(int)arg1 ;
-(short)embeddedThumbnailWidthValue;
-(void)setEmbeddedThumbnailWidthValue:(short)arg1 ;
-(short)embeddedThumbnailHeightValue;
-(void)setEmbeddedThumbnailHeightValue:(short)arg1 ;
-(id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1 ;
-(void)setHDRFlagFromImageProperties:(id)arg1 ;
-(double)captureTime;
-(void)setCaptureTime:(double)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(double)recordModDate;
-(void)setRecordModDate:(double)arg1 ;
-(void)setRecordModDate;
-(SCD_Struct_PL9)gpsCoordinate;
-(BOOL)hasLocationInfo;
-(BOOL)isUsedByiPhoto;
-(BOOL)isHDVideo;
-(BOOL)allowsWallpaperEditing;
-(BOOL)canPerformSharingActions;
-(BOOL)isIncludedInMoments;
-(BOOL)isIncludedInCloudFeeds;
-(BOOL)hasJustBeenShown;
-(BOOL)hasJustBeenHidden;
-(BOOL)hasImageFile;
-(BOOL)couldBeStoredInDCIM;
-(BOOL)isSavedPhotosAsset;
-(id)filePathsWithoutThumbs;
-(id)allFileURLs;
-(id)allUniformTypeIdentifiers;
-(id)pathForPrebakedThumbnail;
-(id)pathForPrebakedWildcatThumbnailsFile;
-(id)pathForTrimmedVideoFile;
-(id)pathForPrebakedLandscapeScrubberThumbnails;
-(id)pathForPrebakedPortraitScrubberThumbnails;
-(id)pathForXMPFile;
-(id)pathForFlattenedVideoFile;
-(BOOL)hasSlalomRegions;
-(id)slalomRegions;
-(id)fileExtensionForService:(id)arg1 ;
-(id)mimeTypeForService:(id)arg1 ;
-(id)newFullSizeImage;
-(id)newLowResolutionFullScreenImage;
-(void)copyToPasteboard;
-(id)textBadgeString;
-(id)wallpaperFullScreenImage;
-(id)previewFrameImageFromDatabase;
-(BOOL)isInRegion:(SCD_Struct_PL11)arg1 ;
-(id)shortenedFilePath;
-(void)setCachedNonPersistedVideoPlaybackURL:(id)arg1 ;
-(void)setCachedNonPersistedVideoPlaybackURLExpiration:(id)arg1 ;
-(id)cachedNonPersistedVideoPlaybackURLError;
-(void)setCachedNonPersistedVideoPlaybackURLError:(id)arg1 ;
-(BOOL)needsMomentUpdate;
-(BOOL)disableDupeAnalysis;
-(void)setDisableDupeAnalysis:(BOOL)arg1 ;
-(BOOL)disableFileSystemPersistency;
-(BOOL)_writeXMPHeaderWithProperties:(id)arg1 orientation:(int)arg2 ;
-(void)_writeXMPSidecarWithProperties:(id)arg1 orientation:(int)arg2 ;
-(void)writeXMPWithProperties:(id)arg1 orientation:(int)arg2 ;
-(void)_computePreCropThumbnailSize:(CGSize*)arg1 andPostCropSize:(CGSize*)arg2 forOrientedOriginalSize:(CGSize)arg3 andCroppedSize:(CGSize)arg4 isLargeThumbnail:(BOOL)arg5 ;
-(unsigned)totalCommentsCount;
-(BOOL)cloudIsDeletableBoolValue;
-(BOOL)cloudHasCommentsByMeBoolValue;
-(BOOL)cloudHasCommentsConversationBoolValue;
-(void)setCloudHasCommentsConversationBoolValue:(BOOL)arg1 ;
-(void)setCloudHasCommentsByMeBoolValue:(BOOL)arg1 ;
-(BOOL)cloudHasUnseenCommentsBoolValue;
-(void)deleteComment:(id)arg1 ;
-(BOOL)userCloudSharedLiked;
-(void)setCloudPlaceholderKindValue:(int)arg1 ;
-(void)setCloudIsDeletableBoolValue:(BOOL)arg1 ;
-(void)setCloudIsMyAssetBoolValue:(BOOL)arg1 ;
-(void)setCloudHasUnseenCommentsBoolValue:(BOOL)arg1 ;
-(void)addComment:(id)arg1 ;
-(int)cloudCommentsStatusForOwnedAsset:(BOOL)arg1 ;
-(BOOL)cloudHasSameOwnerAsAsset:(id)arg1 ;
-(id)userAddCloudSharedCommentWithText:(id)arg1 ;
-(void)userDeleteCloudSharedComment:(id)arg1 ;
-(void)userReadAllCloudSharedComments;
-(void)setUserCloudSharedLiked:(BOOL)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

