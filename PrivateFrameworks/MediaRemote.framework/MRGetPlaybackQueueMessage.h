/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGetPlaybackQueueMessage : MRProtocolMessage {
    struct { 
        int location; 
        int length; 
    }  _range;
}

@property (nonatomic, readonly) struct { struct { int x_1_1_1; int x_1_1_2; } x1; bool x2; double x3; double x4; } request;

- (void)dealloc;
- (id)initWithRequest:(struct { struct { int x_1_1_1; int x_1_1_2; } x1; bool x2; double x3; double x4; })arg1;
- (struct { struct { int x_1_1_1; int x_1_1_2; } x1; bool x2; double x3; double x4; })request;
- (unsigned int)type;

@end
