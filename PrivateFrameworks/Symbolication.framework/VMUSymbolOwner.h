/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, <VMUMemory>, NSString, NSDictionary;

@interface VMUSymbolOwner : NSObject <NSCopying> {
    unsigned int _compatibilityVersion;
    unsigned int _currentVersion;
    unsigned int _flags;
    NSString *_name;
    NSArray *_regions;
    NSDictionary *_signature;
    NSArray *_sourceInfos;
    NSArray *_symbols;
    <VMUMemory> *_textMemory;
}

+ (id)symbolOwnerWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(unsigned int)arg7 currentVersion:(unsigned int)arg8 compatibilityVersion:(unsigned int)arg9;

- (id)architecture;
- (int)compare:(id)arg1;
- (unsigned int)compatibilityVersion;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentVersion;
- (void)dealloc;
- (id)description;
- (unsigned int)flags;
- (id)initWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(unsigned int)arg7 currentVersion:(unsigned int)arg8 compatibilityVersion:(unsigned int)arg9;
- (BOOL)isAOut;
- (BOOL)isBundle;
- (BOOL)isCommpage;
- (BOOL)isDsym;
- (BOOL)isDyld;
- (BOOL)isDylib;
- (BOOL)isEqualToSymbolOwner:(id)arg1;
- (BOOL)isLazy;
- (BOOL)isMachO;
- (BOOL)isPEF;
- (BOOL)isProtected;
- (id)name;
- (id)path;
- (id)programTextForAddress:(unsigned long long)arg1;
- (id)programTextForAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)regionForAddress:(unsigned long long)arg1;
- (id)regions;
- (id)regionsForName:(id)arg1;
- (id)signature;
- (unsigned long long)size;
- (void)slideToSegmentAddresses:(id)arg1;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)sourceInfos;
- (id)sourceInfosInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)symbolForAddress:(unsigned long long)arg1;
- (id)symbolForName:(id)arg1;
- (id)symbolOwnerByAddingContentsOfOwner:(id)arg1;
- (id)symbols;
- (id)symbolsForMangledName:(id)arg1;
- (id)symbolsForName:(id)arg1;
- (id)symbolsInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)validate;

@end
