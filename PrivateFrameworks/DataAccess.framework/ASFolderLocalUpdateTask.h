/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, ASFolder;

@interface ASFolderLocalUpdateTask : ASTask {
    int _commandCode;
    id _completionBlock;
    ASFolder *_folder;
    NSString *_previousSyncKey;
    int _requestType;
}

+ (id)taskWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(id)arg3;

- (void)_appendRequestBodyFolderDataToWBXMLData:(id)arg1;
- (int)commandCode;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)initWithFolder:(id)arg1 previousSyncKey:(id)arg2 completionBlock:(id)arg3;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;

@end
