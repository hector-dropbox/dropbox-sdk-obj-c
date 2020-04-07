///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGInviteMethod;
@class DBTEAMLOGTeamInviteDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamInviteDetails` struct.
///
/// Details about team invites
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamInviteDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// How the user was invited to the team.
@property (nonatomic, readonly) DBTEAMLOGInviteMethod *inviteMethod;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param inviteMethod How the user was invited to the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithInviteMethod:(DBTEAMLOGInviteMethod *)inviteMethod;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamInviteDetails` struct.
///
@interface DBTEAMLOGTeamInviteDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamInviteDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGTeamInviteDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamInviteDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTeamInviteDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamInviteDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamInviteDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGTeamInviteDetails` object.
///
+ (DBTEAMLOGTeamInviteDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
