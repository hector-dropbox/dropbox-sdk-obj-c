///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILEREQUESTSFileRequestDeadline;
@class DBFILEREQUESTSUpdateFileRequestDeadline;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UpdateFileRequestDeadline` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEREQUESTSUpdateFileRequestDeadline : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEREQUESTSUpdateFileRequestDeadlineTag` enum type represents the
/// possible tag states with which the `DBFILEREQUESTSUpdateFileRequestDeadline`
/// union can exist.
typedef NS_ENUM(NSInteger, DBFILEREQUESTSUpdateFileRequestDeadlineTag) {
  /// Do not change the file request's deadline.
  DBFILEREQUESTSUpdateFileRequestDeadlineNoUpdate,

  /// If null, the file request's deadline is cleared.
  DBFILEREQUESTSUpdateFileRequestDeadlineUpdate,

  /// (no description).
  DBFILEREQUESTSUpdateFileRequestDeadlineOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEREQUESTSUpdateFileRequestDeadlineTag tag;

/// If null, the file request's deadline is cleared. @note Ensure the `isUpdate`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly, nullable) DBFILEREQUESTSFileRequestDeadline *update;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "no_update".
///
/// Description of the "no_update" tag state: Do not change the file request's
/// deadline.
///
/// @return An initialized instance.
///
- (instancetype)initWithNoUpdate;

///
/// Initializes union class with tag state of "update".
///
/// Description of the "update" tag state: If null, the file request's deadline
/// is cleared.
///
/// @param update If null, the file request's deadline is cleared.
///
/// @return An initialized instance.
///
- (instancetype)initWithUpdate:(nullable DBFILEREQUESTSFileRequestDeadline *)update;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "no_update".
///
/// @return Whether the union's current tag state has value "no_update".
///
- (BOOL)isNoUpdate;

///
/// Retrieves whether the union's current tag state has value "update".
///
/// @note Call this method and ensure it returns true before accessing the
/// `update` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "update".
///
- (BOOL)isUpdate;

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
/// The serialization class for the `DBFILEREQUESTSUpdateFileRequestDeadline`
/// union.
///
@interface DBFILEREQUESTSUpdateFileRequestDeadlineSerializer : NSObject

///
/// Serializes `DBFILEREQUESTSUpdateFileRequestDeadline` instances.
///
/// @param instance An instance of the `DBFILEREQUESTSUpdateFileRequestDeadline`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEREQUESTSUpdateFileRequestDeadline` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILEREQUESTSUpdateFileRequestDeadline *)instance;

///
/// Deserializes `DBFILEREQUESTSUpdateFileRequestDeadline` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEREQUESTSUpdateFileRequestDeadline` API object.
///
/// @return An instantiation of the `DBFILEREQUESTSUpdateFileRequestDeadline`
/// object.
///
+ (DBFILEREQUESTSUpdateFileRequestDeadline *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END