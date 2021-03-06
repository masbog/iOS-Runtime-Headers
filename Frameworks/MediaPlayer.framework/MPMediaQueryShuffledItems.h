/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPReshuffledArrayIndexMap, MPMediaQuery, NSMutableArray;

@interface MPMediaQueryShuffledItems : NSObject <NSCoding, NSCopying> {
    unsigned int _activeShuffleType;
    BOOL _dirty;
    MPReshuffledArrayIndexMap *_indexMap;
    NSMutableArray *_orderedArray;
    MPMediaQuery *_sourceMediaQuery;
    NSArray *_sourceMediaQueryItems;
}

@property struct _NSRange { unsigned int x1; unsigned int x2; } focusedRange;
@property(readonly) NSArray * items;
@property(readonly) unsigned int realShuffleType;
@property(readonly) MPMediaQuery * sourceMediaQuery;

- (BOOL)_getFixedItemCount:(unsigned int*)arg1;
- (id)_includeInShuffleItemsForQuery:(id)arg1;
- (void)_rebuildCaches;
- (void)_rebuildCachesWithInitialSourceIndex:(unsigned int)arg1;
- (void)_rebuildGroupedCachesWithInitialSourceItemIndex:(unsigned int)arg1;
- (void)_rebuildItemCachesWithInitialSourceItemIndex:(unsigned int)arg1;
- (void)_resetCaches;
- (void)_shuffleMutableOrderedArrayWithInitialIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })focusedRange;
- (unsigned int)indexOfItemWithPersistentID:(unsigned long long)arg1 greaterThanOrEqualToIndex:(unsigned int)arg2;
- (unsigned int)indexOfItemWithPersistentID:(unsigned long long)arg1;
- (unsigned int)indexOfObject:(id)arg1 greaterThanOrEqualToIndex:(unsigned int)arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceMediaQuery:(id)arg1 orderedItems:(id)arg2 indexMap:(id)arg3 shuffleType:(unsigned int)arg4;
- (id)initWithSourceMediaQuery:(id)arg1;
- (void)invalidateSourceMediaQueryAndLoadItems;
- (id)items;
- (unsigned int)nonGrowingCount;
- (unsigned int)nonRepeatingCount;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)realShuffleType;
- (void)setFocusedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)shuffleAlbumsWithInitialIndex:(unsigned int)arg1;
- (void)shuffleItemsWithInitialIndex:(unsigned int)arg1;
- (id)sourceMediaQuery;
- (void)unshuffle;

@end
