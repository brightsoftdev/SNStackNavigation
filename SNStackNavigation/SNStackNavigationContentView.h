//
//  SNStackNavigationContentView.h
//  StackNavigationSample
//
//  Created by Shu MASUDA on 2011/12/28.
//

#import <UIKit/UIKit.h>


@interface SNStackNavigationContentView : UIView

#pragma mark - Public Properties

@property (nonatomic)   CGFloat         tabWidth;
@property (nonatomic)   CGFloat         minimumTabWidth;

@property (readonly, nonatomic) UIView  *stackedViews;
@property (nonatomic)   UIView          *leftView;
@property (nonatomic)   UIView          *rightView;
@property (nonatomic)   UIView          *moreLeftView;
@property (nonatomic)   UIView          *moreRightView;

@end
