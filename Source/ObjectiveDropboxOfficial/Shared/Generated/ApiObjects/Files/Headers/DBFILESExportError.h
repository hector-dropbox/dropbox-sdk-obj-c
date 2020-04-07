///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESExportError;
@class DBFILESLookupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ExportError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESExportError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESExportErrorTag` enum type represents the possible tag states
/// with which the `DBFILESExportError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESExportErrorTag) {
  /// (no description).
  DBFILESExportErrorPath,

  /// This file type cannot be exported. Use `download` instead.
  DBFILESExportErrorNonExportable,

  /// The exportable content is not yet available. Please retry later.
  DBFILESExportErrorRetryError,

  /// (no description).
  DBFILESExportErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESExportErrorTag tag;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESLookupError *path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESLookupError *)path;

///
/// Initializes union class with tag state of "non_exportable".
///
/// Description of the "non_exportable" tag state: This file type cannot be
/// exported. Use `download` instead.
///
/// @return An initialized instance.
///
- (instancetype)initWithNonExportable;

///
/// Initializes union class with tag state of "retry_error".
///
/// Description of the "retry_error" tag state: The exportable content is not
/// yet available. Please retry later.
///
/// @return An initialized instance.
///
- (instancetype)initWithRetryError;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value "non_exportable".
///
/// @return Whether the union's current tag state has value "non_exportable".
///
- (BOOL)isNonExportable;

///
/// Retrieves whether the union's current tag state has value "retry_error".
///
/// @return Whether the union's current tag state has value "retry_error".
///
- (BOOL)isRetryError;

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
/// The serialization class for the `DBFILESExportError` union.
///
@interface DBFILESExportErrorSerializer : NSObject

///
/// Serializes `DBFILESExportError` instances.
///
/// @param instance An instance of the `DBFILESExportError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESExportError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESExportError *)instance;

///
/// Deserializes `DBFILESExportError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESExportError` API object.
///
/// @return An instantiation of the `DBFILESExportError` object.
///
+ (DBFILESExportError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
