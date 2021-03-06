///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGMemberSendInvitePolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MemberSendInvitePolicy` union.
///
/// Policy for controlling whether team members can send team invites
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGMemberSendInvitePolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGMemberSendInvitePolicyTag` enum type represents the possible
/// tag states with which the `DBTEAMLOGMemberSendInvitePolicy` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGMemberSendInvitePolicyTag) {
  /// (no description).
  DBTEAMLOGMemberSendInvitePolicyDisabled,

  /// (no description).
  DBTEAMLOGMemberSendInvitePolicySpecificMembers,

  /// (no description).
  DBTEAMLOGMemberSendInvitePolicyEveryone,

  /// (no description).
  DBTEAMLOGMemberSendInvitePolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGMemberSendInvitePolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disabled".
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabled;

///
/// Initializes union class with tag state of "specific_members".
///
/// @return An initialized instance.
///
- (instancetype)initWithSpecificMembers;

///
/// Initializes union class with tag state of "everyone".
///
/// @return An initialized instance.
///
- (instancetype)initWithEveryone;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "disabled".
///
/// @return Whether the union's current tag state has value "disabled".
///
- (BOOL)isDisabled;

///
/// Retrieves whether the union's current tag state has value
/// "specific_members".
///
/// @return Whether the union's current tag state has value "specific_members".
///
- (BOOL)isSpecificMembers;

///
/// Retrieves whether the union's current tag state has value "everyone".
///
/// @return Whether the union's current tag state has value "everyone".
///
- (BOOL)isEveryone;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGMemberSendInvitePolicy` union.
///
@interface DBTEAMLOGMemberSendInvitePolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGMemberSendInvitePolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGMemberSendInvitePolicy` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberSendInvitePolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGMemberSendInvitePolicy *)instance;

///
/// Deserializes `DBTEAMLOGMemberSendInvitePolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberSendInvitePolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGMemberSendInvitePolicy` object.
///
+ (DBTEAMLOGMemberSendInvitePolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
