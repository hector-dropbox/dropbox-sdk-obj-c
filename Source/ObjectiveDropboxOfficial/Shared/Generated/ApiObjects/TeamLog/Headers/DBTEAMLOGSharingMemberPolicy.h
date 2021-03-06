///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharingMemberPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharingMemberPolicy` union.
///
/// External sharing policy
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharingMemberPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGSharingMemberPolicyTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGSharingMemberPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGSharingMemberPolicyTag) {
  /// (no description).
  DBTEAMLOGSharingMemberPolicyAllow,

  /// (no description).
  DBTEAMLOGSharingMemberPolicyForbid,

  /// (no description).
  DBTEAMLOGSharingMemberPolicyForbidWithExclusions,

  /// (no description).
  DBTEAMLOGSharingMemberPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGSharingMemberPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "allow".
///
/// @return An initialized instance.
///
- (instancetype)initWithAllow;

///
/// Initializes union class with tag state of "forbid".
///
/// @return An initialized instance.
///
- (instancetype)initWithForbid;

///
/// Initializes union class with tag state of "forbid_with_exclusions".
///
/// @return An initialized instance.
///
- (instancetype)initWithForbidWithExclusions;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "allow".
///
/// @return Whether the union's current tag state has value "allow".
///
- (BOOL)isAllow;

///
/// Retrieves whether the union's current tag state has value "forbid".
///
/// @return Whether the union's current tag state has value "forbid".
///
- (BOOL)isForbid;

///
/// Retrieves whether the union's current tag state has value
/// "forbid_with_exclusions".
///
/// @return Whether the union's current tag state has value
/// "forbid_with_exclusions".
///
- (BOOL)isForbidWithExclusions;

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
/// The serialization class for the `DBTEAMLOGSharingMemberPolicy` union.
///
@interface DBTEAMLOGSharingMemberPolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGSharingMemberPolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGSharingMemberPolicy` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharingMemberPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharingMemberPolicy *)instance;

///
/// Deserializes `DBTEAMLOGSharingMemberPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharingMemberPolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharingMemberPolicy` object.
///
+ (DBTEAMLOGSharingMemberPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
