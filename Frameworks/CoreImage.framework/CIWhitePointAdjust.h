/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIColor;

@interface CIWhitePointAdjust : CIFilter {
    CIColor *inputColor;
    CIImage *inputImage;
}

@property(copy) CIColor * inputColor;
@property(retain) CIImage * inputImage;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)_kernel;
- (id)inputColor;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputColor:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
