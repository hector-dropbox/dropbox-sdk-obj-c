///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMPOLICIESShowcaseExternalSharingPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ShowcaseExternalSharingPolicy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMPOLICIESShowcaseExternalSharingPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMPOLICIESShowcaseExternalSharingPolicyTag` enum type represents
/// the possible tag states with which the
/// `DBTEAMPOLICIESShowcaseExternalSharingPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMPOLICIESShowcaseExternalSharingPolicyTag) {
  /// Do not allow showcases to be shared with people not on the team.
  DBTEAMPOLICIESShowcaseExternalSharingPolicyDisabled,

  /// Allow showcases to be shared with people not on the team.
  DBTEAMPOLICIESShowcaseExternalSharingPolicyEnabled,

  /// (no description).
  DBTEAMPOLICIESShowcaseExternalSharingPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMPOLICIESShowcaseExternalSharingPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disabled".
///
/// Description of the "disabled" tag state: Do not allow showcases to be shared
/// with people not on the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabled;

///
/// Initializes union class with tag state of "enabled".
///
/// Description of the "enabled" tag state: Allow showcases to be shared with
/// people not on the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithEnabled;

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
/// Retrieves whether the union's current tag state has value "enabled".
///
/// @return Whether the union's current tag state has value "enabled".
///
- (BOOL)isEnabled;

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
/// The serialization class for the
/// `DBTEAMPOLICIESShowcaseExternalSharingPolicy` union.
///
@interface DBTEAMPOLICIESShowcaseExternalSharingPolicySerializer : NSObject

///
/// Serializes `DBTEAMPOLICIESShowcaseExternalSharingPolicy` instances.
///
/// @param instance An instance of the
/// `DBTEAMPOLICIESShowcaseExternalSharingPolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESShowcaseExternalSharingPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMPOLICIESShowcaseExternalSharingPolicy *)instance;

///
/// Deserializes `DBTEAMPOLICIESShowcaseExternalSharingPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESShowcaseExternalSharingPolicy` API object.
///
/// @return An instantiation of the
/// `DBTEAMPOLICIESShowcaseExternalSharingPolicy` object.
///
+ (DBTEAMPOLICIESShowcaseExternalSharingPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END