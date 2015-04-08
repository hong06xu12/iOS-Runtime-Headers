/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MFFuture, NSLock, NSObject<OS_dispatch_queue>, NSXPCInterface, Protocol;

@interface MSXPCConnection : NSXPCConnection {
    MFFuture *_connectionFuture;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _interruptionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidationHandler;

    NSLock *_lock;
    Protocol *_protocol;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCInterface *_remoteObjectInterface;
    int _resumeCount;
    BOOL _shouldLaunchMobileMail;
    unsigned int _state;
}

@property(retain,readonly) Protocol * protocol;
@property BOOL shouldLaunchMobileMail;

- (id)_connection;
- (id)_connectionForFuture:(id)arg1;
- (void)_finishFuture:(id)arg1 withConnection:(id)arg2 error:(id)arg3;
- (void)_invalidateFuture:(id)arg1;
- (void)_invokeInterruptionHandlerForFuture:(id)arg1;
- (id)_nts_wrappedInterruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(id)arg4;
- (int)auditSessionIdentifier;
- (void)dealloc;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithProtocol:(id)arg1;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (int)processIdentifier;
- (id)protocol;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (void)resume;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setShouldLaunchMobileMail:(BOOL)arg1;
- (BOOL)shouldLaunchMobileMail;
- (void)suspend;

@end