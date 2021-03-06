//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //com/intel/wearable/platform/timeiq/sensors/replay/PlaybackFileManager.java
//

#ifndef _PlaybackFileManager_H_
#define _PlaybackFileManager_H_

@class BufferedReader;
#import "JBArrayList.h"
@protocol JavaUtilIterator;
#import "JBArrayList.h"

#import "JB.h"

/**
 @brief Created by eleuchte on 11/01/15.
 */
@interface PlaybackFileManager : NSObject {
}

- (instancetype)initWithJavaUtilList:(ArrayList*)dumpFileNames;

+ (PlaybackFileManager *)getPlaybackFileManagerFromFileWithNSString:(NSString *)dumpFileName;

+ (PlaybackFileManager *)getPlaybackFileManagerFromFileWithNSString:(NSString *)dumpFileName
                                                       withNSString:(NSString *)dirName;

+ (PlaybackFileManager *)getPlaybackFileManagerFromFileListWithArrayList:(ArrayList *)dumpFileNames;

+ (PlaybackFileManager *)getPlaybackFileManagerFromFileListWithArrayList:(ArrayList *)dumpFileNames
                                                                    withNSString:(NSString *)dirName;

+ (boolean)populateReader;

+ (NSString *)readLine;

@end

FOUNDATION_EXPORT BOOL PlaybackFileManager_initialized;
J2OBJC_STATIC_INIT(PlaybackFileManager)

FOUNDATION_EXPORT NSString *PlaybackFileManager_TAG_;
J2OBJC_STATIC_FIELD_GETTER(PlaybackFileManager, TAG_, NSString *)

FOUNDATION_EXPORT BufferedReader *PlaybackFileManager_m_myReader_;
J2OBJC_STATIC_FIELD_GETTER(PlaybackFileManager, m_myReader_, BufferedReader *)
//J2OBJC_STATIC_FIELD_SETTER(PlaybackFileManager, m_myReader_, BufferedReader *)

FOUNDATION_EXPORT id<Iterator> PlaybackFileManager_m_fileNamesItr_;
J2OBJC_STATIC_FIELD_GETTER(PlaybackFileManager, m_fileNamesItr_, id<Iterator>)
//J2OBJC_STATIC_FIELD_SETTER(PlaybackFileManager, m_fileNamesItr_, id<Iterator>)

typedef PlaybackFileManager ComIntelWearablePlatformTimeiqSensorsReplayPlaybackFileManager;

#endif // _PlaybackFileManager_H_
