#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;

@property(nonatomic) CGFloat strokeWidthMin;
@property(nonatomic) CGFloat strokeWidthMax;

@property(nonatomic, readonly) BOOL drawnSignature;

@property(nonatomic) CGFloat minimumSignatureWidth;

@property(nonatomic, readonly) CGFloat signatureMinX;
@property(nonatomic, readonly) CGFloat signatureMaxX;
@property(nonatomic, readonly) CGFloat signatureMinY;
@property(nonatomic, readonly) CGFloat signatureMaxY;

- (void)erase;

@end
