//
//  JKPhotoBrowserCell.h
//  JKPhotoBrowser
//
//  Created by Jecky on 14/12/29.
//  Copyright (c) 2014年 Jecky. All rights reserved.
//


/**
 *  点击"预览"之后，弹出来的可左右滑动的视图(CollectionView) 的 Cell
 *  屏幕大小，显示一张图片
 */

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>


@interface JKPhotoBrowserCell : UICollectionViewCell

@property (nonatomic, strong) UIImage    *image;
@property (nonatomic, strong) ALAsset    *asset;

@end
