//
//  UIMenu+FLEX.h
//  FLEX
//
//  Created by Tanner on 1/28/20.
//  Copyright © 2020 FLEX Team. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIMenu (FLEX)

+ (instancetype)inlineMenuWithTitle:(NSString *)title
                              image:(UIImage *)image
                           children:(NSArray<UIMenuElement *> *)children;

- (instancetype)collapsed;

@end
