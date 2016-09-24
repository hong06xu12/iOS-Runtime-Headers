/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainerItemDiffMetadata : NSObject {
    int  _containerPersistentID;
    int  _itemPersistentID;
    int  _newPosition;
    int  _persistentID;
    int  _previousPosition;
}

@property (nonatomic) int containerPersistentID;
@property (nonatomic) int itemPersistentID;
@property (nonatomic) int newPosition;
@property (nonatomic) int persistentID;
@property (nonatomic) int previousPosition;

+ (id)diffMetadataWithPersistentID:(int)arg1;
+ (id)diffMetadataWithPersistentID:(int)arg1 containerPersistentID:(int)arg2 itemPersistentID:(int)arg3 newPosition:(int)arg4 previousPosition:(int)arg5;

- (int)containerPersistentID;
- (int)itemPersistentID;
- (int)newPosition;
- (int)persistentID;
- (int)previousPosition;
- (void)setContainerPersistentID:(int)arg1;
- (void)setItemPersistentID:(int)arg1;
- (void)setNewPosition:(int)arg1;
- (void)setPersistentID:(int)arg1;
- (void)setPreviousPosition:(int)arg1;

@end