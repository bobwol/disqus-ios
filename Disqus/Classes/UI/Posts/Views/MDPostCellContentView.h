//
//  MDPostCellContentView.h
//  Disqus
//
//  Created by Andrew Kopanev on 1/17/14.
//  Copyright (c) 2014 Moqod. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MDPostCellContentView : UIView

+ (CGFloat)heightForPost:(NSDictionary *)post width:(CGFloat)width;

- (void)setPost:(NSDictionary *)postDictionary;

@end
