//
//  JKAssetsViewCell.h
//  JKImagePicker
//
//  Created by Jecky on 15/1/12.
//  Copyright (c) 2015年 Jecky. All rights reserved.
//



/**
 *  选择照片界面的 CollectionView 的 Cell
 */

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@class JKAssetsViewCell;

@protocol JKAssetsViewCellDelegate <NSObject>
@optional
- (void)startPhotoAssetsViewCell:(JKAssetsViewCell *)assetsCell;
- (void)didSelectItemAssetsViewCell:(JKAssetsViewCell *)assetsCell;
- (void)didDeselectItemAssetsViewCell:(JKAssetsViewCell *)assetsCell;

@end

@interface JKAssetsViewCell : UICollectionViewCell

@property (nonatomic, weak) id<JKAssetsViewCellDelegate>  delegate;
@property (nonatomic, strong) ALAsset *asset;
@property (nonatomic, assign) BOOL    isSelected;

@end
