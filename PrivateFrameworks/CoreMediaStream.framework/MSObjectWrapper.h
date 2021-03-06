/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class <NSObject><NSCoding>, <NSCoding>;

@interface MSObjectWrapper : NSObject {
    int _errorCount;
    <NSObject><NSCoding> *_object;
    long long _size;
    long long _uniqueID;
}

@property int errorCount;
@property(readonly) <NSCoding> * object;
@property long long size;
@property long long uniqueID;

+ (int)indexOfObject:(id)arg1 inWrapperArray:(id)arg2;
+ (id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2;
+ (id)objectsFromWrappers:(id)arg1;
+ (id)wrapperWithObject:(id)arg1 size:(long long)arg2;

- (void).cxx_destruct;
- (int)errorCount;
- (id)initWithObject:(id)arg1 size:(long long)arg2;
- (id)object;
- (void)setErrorCount:(int)arg1;
- (void)setSize:(long long)arg1;
- (void)setUniqueID:(long long)arg1;
- (long long)size;
- (long long)uniqueID;

@end
