///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBAUTHAppAuthRoutes.h"
#import "DBCHECKAppAuthRoutes.h"
#import "DBRequestErrors.h"
#import "DBTasks.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DBTransportClient;

///
/// Base client object that contains an instance field for each namespace, each
/// of which contains references to all routes within that namespace.
/// Fully-implemented API clients will inherit this class.
///
@interface DBAppBaseClient : NSObject {

@protected
  id<DBTransportClient> _transportClient;
}

/// Routes within the `auth` namespace.
@property (nonatomic, readonly) DBAUTHAppAuthRoutes *authRoutes;

/// Routes within the `check` namespace.
@property (nonatomic, readonly) DBCHECKAppAuthRoutes *checkRoutes;

/// Initializes the `DBAppBaseClient` object with a networking client.
- (instancetype)initWithTransportClient:(id<DBTransportClient>)client;

@end

NS_ASSUME_NONNULL_END
