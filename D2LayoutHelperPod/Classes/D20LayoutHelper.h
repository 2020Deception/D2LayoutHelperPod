//
//  D2LayoutHelper.h
//  Pods
//
//  Created by Brian Bowman on 9/6/16.
//
//

@import Foundation;
@import UIKit;

NS_ASSUME_NONNULL_BEGIN

/*!
 D20LayoutHelper is your one stop shop to adding common contstraints to your projects. Deprecated as of iOS 11.
 */
NS_DEPRECATED_IOS(7_0, 10_0)
@interface D20LayoutHelper : NSObject

/*!
 sets the subview constraints to match the superview.
 @param superview the superview
 @param subview the subview
 */
+ (void)widthHeightEquivalentsConstraintsWithSuperView:(UIView *)superview
                                               subview:(UIView *)subview;
/*!
 sets the subview constraints to match the superview.
 @param superview the superview
 @param subview the subview
 @param constants top, right, bottom, left constants in their respective order
 */
+ (void)widthHeightEquivalentsConstraintsWithSuperView:(UIView *)superview
                                               subview:(UIView *)subview
                                             constants:(float[_Nonnull 4])constants;



/*!
 sets the subview constraints to match the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 */
+ (void)widthHeightEquivalentsConstraintsByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                   subview:(UIView *)subview;

/*!
 sets the subview constraints to match the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 @param constants top, right, bottom, left constants in their respective order
 */
+ (void)widthHeightEquivalentsConstraintsByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                   subview:(UIView *)subview
                                                                 constants:(float[_Nonnull 4])constants;

/*!
 sets the subview width constraints to match the superview.
 @param superview the superview
 @param subview the subview
 */
+ (void)widthEquivalentsConstraintsWithSuperView:(UIView *)superview
                                         subview:(UIView *)subview;

/*!
 sets the subview width constraints to match the superview.
 @param superview the superview
 @param subview the subview
 @param constants leading, trailing constants in their respective order
 */
+ (void)widthEquivalentsConstraintsWithSuperView:(UIView *)superview
                                         subview:(UIView *)subview
                                       constants:(float[_Nonnull 2])constants;

/*!
 sets the subview width constraints to match the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 */
+ (void)widthEquivalentsConstraintsByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                             subview:(UIView *)subview;
/*!
 sets the subview width constraints to match the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 @param constants leading, trailing constants in their respective order
 */
+ (void)widthEquivalentsConstraintsByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                             subview:(UIView *)subview
                                                           constants:(float[_Nonnull 2])constants;

/*!
 sets the subview height constraints to match the superview.
 @param superview the superview
 @param subview the subview
 */
+ (void)heightEquivalentsConstraintsWithSuperView:(UIView *)superview
                                          subview:(UIView *)subview;
/*!
 sets the subview height constraints to match the superview.
 @param superview the superview
 @param subview the subview
 @param constants top, bottom constants in their respective order
 */
+ (void)heightEquivalentsConstraintsWithSuperView:(UIView *)superview
                                          subview:(UIView *)subview
                                        constants:(float[_Nonnull 2])constants;

/*!
 sets the subview height constraints to match the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 */
+ (void)heightEquivalentsConstraintsByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                              subview:(UIView *)subview;
/*!
 sets the subview height constraints to match the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 @param constants top, bottom constants in their respective order
 */
+ (void)heightEquivalentsConstraintsByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                              subview:(UIView *)subview
                                                            constants:(float[_Nonnull 2])constants;

/*!
 sets the subviews to be evenly distributed across the superview to its edges.
 @param superview the superview
 @param subviews the subviews
 @param alignment the alignment
 @param distribution the distribution
 @param axis the axis
 @param spacing the spacing between items
 @returns the stackview
 */
+ (UIStackView *)evenConstraintsWithSuperView:(UIView *)superview
                            subviews:( NSArray<UIView *> *)subviews
                           alignment:(UIStackViewAlignment)alignment
                        distribution:(UIStackViewDistribution)distribution
                                axis:(UILayoutConstraintAxis)axis
                             spacing:(CGFloat)spacing;

/*!
 sets the subviews to be evenly distributed across the superview to its LayoutMarginsGuide.
 @param superview the superview
 @param subviews the subviews
 @param alignment the alignment
 @param distribution the distribution
 @param axis the axis
 @param spacing the spacing between items
 @returns the stackview
 */
+ (UIStackView *)evenConstraintsByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                subviews:(NSArray<UIView *> *)subviews
                                               alignment:(UIStackViewAlignment)alignment
                                            distribution:(UIStackViewDistribution)distribution
                                                    axis:(UILayoutConstraintAxis)axis
                                                 spacing:(CGFloat)spacing;

/*!
 pins the subview to the top, leading and trailing edges of the superview, similar to the placement of a navigation bar.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToTopWithSuperView:(UIView *)superview
                                                     subview:(UIView *)subview
                                                      height:(CGFloat)height;
/*!
 pins the subview to the top, leading and trailing edges of the superview, similar to the placement of a navigation bar.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @param constants leading, top, trailing constants in that order
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToTopWithSuperView:(UIView *)superview
                                                     subview:(UIView *)subview
                                                      height:(CGFloat)height
                                                   constants:(float[_Nonnull 3])constants;

/*!
 pins the subview to the top of the superview via its LayoutMarginsGuide, leading and trailing edges of the superview.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToTopByTopLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                            subview:(UIView *)subview
                                                                             height:(CGFloat)height;
/*!
 pins the subview to the top of the superview via its LayoutMarginsGuide, leading and trailing edges of the superview.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @param constants leading, top, trailing constants in that order
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToTopByTopLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                              subview:(UIView *)subview
                                                                             height:(CGFloat)height
                                                                          constants:(float[_Nonnull 3])constants;

/*!
 pins the subview to the top, leading and trailing edges of the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToTopByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                         subview:(UIView *)subview
                                                                          height:(CGFloat)height;
/*!
 pins the subview to the top, leading and trailing edges of the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @param constants leading, top, trailing constants in that order
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToTopByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                         subview:(UIView *)subview
                                                                          height:(CGFloat)height
                                                                       constants:(float[_Nonnull 3])constants;

/*!
 pins item to the center of it superview, you must separetly set the height and width.
 @param superview the superview
 @param subview the subview
 @returns the layout x, y constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemtoCenterOfSuperView:(UIView *)superview
                                                      subview:(UIView *)subview;
    
/*!
 sets the subviews constraints to be evenly distributed across the superview to its edges from the center.
 @param superview the superview
 @param subviews the subviews
 @param alignment the alignment
 @param distribution the distribution
 @param axis the axis
 @param spacing the spacing between items
 @returns the layout x, y constraints
 */
+ (NSArray<NSLayoutConstraint *> *)centeredItemsWithSuperView:(UIView *)superview
                            subviews:( NSArray<UIView *> *)subviews
                           alignment:(UIStackViewAlignment)alignment
                        distribution:(UIStackViewDistribution)distribution
                              axis:(UILayoutConstraintAxis)axis
                           spacing:(CGFloat)spacing;
    
/*!
 sets the subviews constraints to be evenly distributed across the superview to its LayoutMarginsGuide from the center.
 @param superview the superview
 @param subviews the subviews
 @param alignment the alignment
 @param distribution the distribution
 @param axis the axis
 @param spacing the spacing between items
 @returns the layout x, y constraints
 */
+ (NSArray<NSLayoutConstraint *> *)centeredItemsByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                subviews:(NSArray<UIView *> *)subviews
                                               alignment:(UIStackViewAlignment)alignment
                                            distribution:(UIStackViewDistribution)distribution
                                                  axis:(UILayoutConstraintAxis)axis
                                               spacing:(CGFloat)spacing;

/*!
 centers the subview on the the superview
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @returns the layout height, width, x, y constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemtoCenterOfSuperView:(UIView *)superview
                                                      subview:(UIView *)subview
                                                        width:(CGFloat)width
                                                       height:(CGFloat)height;

/*!
 pins the subview to the bottom, leading and trailing edges of the superview, similar to the placement of a navigation bar.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToBottomWithSuperView:(UIView *)superview
                                                        subview:(UIView *)subview
                                                         height:(CGFloat)height;
/*!
 pins the subview to the bottom, leading and trailing edges of the superview, similar to the placement of a navigation bar.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @param constants leading, bottom, trailing constants in that order
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToBottomWithSuperView:(UIView *)superview
                                                     subview:(UIView *)subview
                                                         height:(CGFloat)height
                                                      constants:(float[_Nonnull 3])constants;

/*!
 pins the subview to the bottom of the superview via its LayoutMarginsGuide, leading and trailing edges of the superview.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToBottomByBottomLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                                  subview:(UIView *)subview
                                                                                   height:(CGFloat)height;
/*!
 pins the subview to the bottom of the superview via its LayoutMarginsGuide, leading and trailing edges of the superview.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @param constants leading, bottom, trailing constants in that order
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToBottomByBottomLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                              subview:(UIView *)subview
                                                                                   height:(CGFloat)height
                                                                                constants:(float[_Nonnull 3])constants;

/*!
 pins the subview to the bottom, leading and trailing edges of the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToBottomByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                            subview:(UIView *)subview
                                                                             height:(CGFloat)height;
/*!
 pins the subview to the bottom, leading and trailing edges of the superview via its LayoutMarginsGuide.
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @param constants leading, bottom, trailing constants in that order
 @returns the layout height constraints
 */
+ (NSArray<NSLayoutConstraint *> *)pinItemToBottomByLayoutMarginsGuideWithSuperView:(UIView *)superview
                                                                            subview:(UIView *)subview
                                                                             height:(CGFloat)height
                                                                           constants:(float[_Nonnull 3])constants;

/*!
 sets the subview on the the superview with height and width contraints only
 @param superview the superview
 @param subview the subview
 @param height the height of the subview
 @returns the layout height, width constraints
 */
+ (NSArray<NSLayoutConstraint *> *)constraintsForWidthAndHeightOnSuperView:(UIView *)superview
                                                                subview:(UIView *)subview
                                                                     width:(CGFloat)width
                                                                    height:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
