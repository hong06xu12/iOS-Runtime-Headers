/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDictionary;

@interface CKPublishAssetsOperation : CKDatabaseOperation {
    unsigned int _URLOptions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _assetPublishedBlock;

    NSDictionary *_fileNamesByAssetFieldNames;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _publishAssetCompletionBlock;

    NSArray *_recordIDs;
    unsigned int _requestedTTL;
}

@property unsigned int URLOptions;
@property(copy) id assetPublishedBlock;
@property(retain) NSDictionary * fileNamesByAssetFieldNames;
@property(copy) id publishAssetCompletionBlock;
@property(retain) NSArray * recordIDs;
@property unsigned int requestedTTL;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (unsigned int)URLOptions;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)assetPublishedBlock;
- (id)fileNamesByAssetFieldNames;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (void)performCKOperation;
- (id)publishAssetCompletionBlock;
- (id)recordIDs;
- (unsigned int)requestedTTL;
- (void)setAssetPublishedBlock:(id)arg1;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (void)setPublishAssetCompletionBlock:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRequestedTTL:(unsigned int)arg1;
- (void)setURLOptions:(unsigned int)arg1;

@end