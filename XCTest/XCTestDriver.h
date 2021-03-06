//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCTestDriverInterface-Protocol.h>
#import <XCTest/XCTestManager_TestsInterface-Protocol.h>

@class DTXConnection, NSString, NSUUID, NSXPCConnection, XCTestConfiguration, XCTestSuite;
@protocol OS_dispatch_queue, XCTestManager_IDEInterface, XCTestManager_ManagerInterface;

@interface XCTestDriver : NSObject <XCTestManager_TestsInterface, XCTestDriverInterface>
{
    XCTestSuite *_currentTestSuite;
    XCTestConfiguration *_currentTestConfiguration;
    CDUnknownBlockType _completionHandler;
    NSXPCConnection *_managerConnection;
    _Bool _connectionInProgress;
    _Bool _waitingToStart;
    _Bool _hasIDEConnection;
    _Bool _runningSuite;
    NSObject<OS_dispatch_queue> *_managerQueue;
    NSUUID *_sessionIdentifier;
    NSString *_sessionSocketPath;
    DTXConnection *_IDEConnection;
    id <XCTestManager_IDEInterface> _IDEProxy;
    long long _IDEProtocolVersion;
    unsigned long long _daemonProtocolVersion;
    int _daemonAvailabilityToken;
}

+ (id)sharedTestDriver;
@property unsigned long long daemonProtocolVersion; // @synthesize daemonProtocolVersion=_daemonProtocolVersion;
@property _Bool hasIDEConnection; // @synthesize hasIDEConnection=_hasIDEConnection;
@property _Bool waitingToStart; // @synthesize waitingToStart=_waitingToStart;
@property long long IDEProtocolVersion; // @synthesize IDEProtocolVersion=_IDEProtocolVersion;
@property(readonly) id <XCTestManager_IDEInterface> IDEProxy; // @synthesize IDEProxy=_IDEProxy;
@property(retain) DTXConnection *IDEConnection; // @synthesize IDEConnection=_IDEConnection;
@property(retain) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property XCTestSuite *currentTestSuite; // @synthesize currentTestSuite=_currentTestSuite;
- (void)_XCT_receivedAccessibilityNotification:(int)arg1 withPayload:(id)arg2;
- (void)_XCT_applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(id)arg1;
- (void)runTestConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runTestSuite:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_checkForTestManager;
- (void)_connectToTestManager;
- (void)_checkManagerDaemonStateAndConnectIfAvailable;
- (void)_resetManagerConnection;
- (void)_connectToIDEWithTransport:(id)arg1;
- (void)_runSuite;
- (void)resumeAppSleep:(id)arg1;
- (id)suspendAppSleep;
@property(readonly) id <XCTestManager_ManagerInterface> managerProxy;
- (id)init;

@end

