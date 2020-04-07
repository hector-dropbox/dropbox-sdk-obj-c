///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBFILESMetadata.h"
#import "DBSerializableProtocol.h"

@class DBFILEPROPERTIESPropertyGroup;
@class DBFILESExportInfo;
@class DBFILESFileLockMetadata;
@class DBFILESFileMetadata;
@class DBFILESFileSharingInfo;
@class DBFILESMediaInfo;
@class DBFILESSymlinkInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileMetadata` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESFileMetadata : DBFILESMetadata <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// A unique identifier for the file.
@property (nonatomic, readonly, copy) NSString *id_;

/// For files, this is the modification time set by the desktop client when the
/// file was added to Dropbox. Since this time is not verified (the Dropbox
/// server stores whatever the desktop client sends up), this should only be
/// used for display purposes (such as sorting) and not, for example, to
/// determine if a file has changed or not.
@property (nonatomic, readonly) NSDate *clientModified;

/// The last time the file was modified on Dropbox.
@property (nonatomic, readonly) NSDate *serverModified;

/// A unique identifier for the current revision of a file. This field is the
/// same rev as elsewhere in the API and can be used to detect changes and avoid
/// conflicts.
@property (nonatomic, readonly, copy) NSString *rev;

/// The file size in bytes.
@property (nonatomic, readonly) NSNumber *size;

/// Additional information if the file is a photo or video. This field will not
/// be set on entries returned by `listFolder`, `listFolderContinue`, or
/// `getThumbnailBatch`, starting December 2, 2019.
@property (nonatomic, readonly, nullable) DBFILESMediaInfo *mediaInfo;

/// Set if this file is a symlink.
@property (nonatomic, readonly, nullable) DBFILESSymlinkInfo *symlinkInfo;

/// Set if this file is contained in a shared folder.
@property (nonatomic, readonly, nullable) DBFILESFileSharingInfo *sharingInfo;

/// If true, file can be downloaded directly; else the file must be exported.
@property (nonatomic, readonly) NSNumber *isDownloadable;

/// Information about format this file can be exported to. This filed must be
/// set if isDownloadable is set to false.
@property (nonatomic, readonly, nullable) DBFILESExportInfo *exportInfo;

/// Additional information if the file has custom properties with the property
/// template specified.
@property (nonatomic, readonly, nullable) NSArray<DBFILEPROPERTIESPropertyGroup *> *propertyGroups;

/// This flag will only be present if include_has_explicit_shared_members  is
/// true in `listFolder` or `getMetadata`. If this  flag is present, it will be
/// true if this file has any explicit shared  members. This is different from
/// sharing_info in that this could be true  in the case where a file has
/// explicit members but is not contained within  a shared folder.
@property (nonatomic, readonly, nullable) NSNumber *hasExplicitSharedMembers;

/// A hash of the file content. This field can be used to verify data integrity.
/// For more information see our Content hash
/// https://www.dropbox.com/developers/reference/content-hash page.
@property (nonatomic, readonly, copy, nullable) NSString *contentHash;

/// If present, the metadata associated with the file's current lock.
@property (nonatomic, readonly, nullable) DBFILESFileLockMetadata *fileLockInfo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param name The last component of the path (including extension). This never
/// contains a slash.
/// @param id_ A unique identifier for the file.
/// @param clientModified For files, this is the modification time set by the
/// desktop client when the file was added to Dropbox. Since this time is not
/// verified (the Dropbox server stores whatever the desktop client sends up),
/// this should only be used for display purposes (such as sorting) and not, for
/// example, to determine if a file has changed or not.
/// @param serverModified The last time the file was modified on Dropbox.
/// @param rev A unique identifier for the current revision of a file. This
/// field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
/// @param size The file size in bytes.
/// @param pathLower The lowercased full path in the user's Dropbox. This always
/// starts with a slash. This field will be null if the file or folder is not
/// mounted.
/// @param pathDisplay The cased path to be used for display purposes only. In
/// rare instances the casing will not correctly match the user's filesystem,
/// but this behavior will match the path provided in the Core API v1, and at
/// least the last path component will have the correct casing. Changes to only
/// the casing of paths won't be returned by `listFolderContinue`. This field
/// will be null if the file or folder is not mounted.
/// @param parentSharedFolderId Please use `parentSharedFolderId` in
/// `DBFILESFileSharingInfo` or `parentSharedFolderId` in
/// `DBFILESFolderSharingInfo` instead.
/// @param mediaInfo Additional information if the file is a photo or video.
/// This field will not be set on entries returned by `listFolder`,
/// `listFolderContinue`, or `getThumbnailBatch`, starting December 2, 2019.
/// @param symlinkInfo Set if this file is a symlink.
/// @param sharingInfo Set if this file is contained in a shared folder.
/// @param isDownloadable If true, file can be downloaded directly; else the
/// file must be exported.
/// @param exportInfo Information about format this file can be exported to.
/// This filed must be set if isDownloadable is set to false.
/// @param propertyGroups Additional information if the file has custom
/// properties with the property template specified.
/// @param hasExplicitSharedMembers This flag will only be present if
/// include_has_explicit_shared_members  is true in `listFolder` or
/// `getMetadata`. If this  flag is present, it will be true if this file has
/// any explicit shared  members. This is different from sharing_info in that
/// this could be true  in the case where a file has explicit members but is not
/// contained within  a shared folder.
/// @param contentHash A hash of the file content. This field can be used to
/// verify data integrity. For more information see our Content hash
/// https://www.dropbox.com/developers/reference/content-hash page.
/// @param fileLockInfo If present, the metadata associated with the file's
/// current lock.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name
                         id_:(NSString *)id_
              clientModified:(NSDate *)clientModified
              serverModified:(NSDate *)serverModified
                         rev:(NSString *)rev
                        size:(NSNumber *)size
                   pathLower:(nullable NSString *)pathLower
                 pathDisplay:(nullable NSString *)pathDisplay
        parentSharedFolderId:(nullable NSString *)parentSharedFolderId
                   mediaInfo:(nullable DBFILESMediaInfo *)mediaInfo
                 symlinkInfo:(nullable DBFILESSymlinkInfo *)symlinkInfo
                 sharingInfo:(nullable DBFILESFileSharingInfo *)sharingInfo
              isDownloadable:(nullable NSNumber *)isDownloadable
                  exportInfo:(nullable DBFILESExportInfo *)exportInfo
              propertyGroups:(nullable NSArray<DBFILEPROPERTIESPropertyGroup *> *)propertyGroups
    hasExplicitSharedMembers:(nullable NSNumber *)hasExplicitSharedMembers
                 contentHash:(nullable NSString *)contentHash
                fileLockInfo:(nullable DBFILESFileLockMetadata *)fileLockInfo;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param name The last component of the path (including extension). This never
/// contains a slash.
/// @param id_ A unique identifier for the file.
/// @param clientModified For files, this is the modification time set by the
/// desktop client when the file was added to Dropbox. Since this time is not
/// verified (the Dropbox server stores whatever the desktop client sends up),
/// this should only be used for display purposes (such as sorting) and not, for
/// example, to determine if a file has changed or not.
/// @param serverModified The last time the file was modified on Dropbox.
/// @param rev A unique identifier for the current revision of a file. This
/// field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
/// @param size The file size in bytes.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name
                         id_:(NSString *)id_
              clientModified:(NSDate *)clientModified
              serverModified:(NSDate *)serverModified
                         rev:(NSString *)rev
                        size:(NSNumber *)size;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileMetadata` struct.
///
@interface DBFILESFileMetadataSerializer : NSObject

///
/// Serializes `DBFILESFileMetadata` instances.
///
/// @param instance An instance of the `DBFILESFileMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESFileMetadata` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESFileMetadata *)instance;

///
/// Deserializes `DBFILESFileMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESFileMetadata` API object.
///
/// @return An instantiation of the `DBFILESFileMetadata` object.
///
+ (DBFILESFileMetadata *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
