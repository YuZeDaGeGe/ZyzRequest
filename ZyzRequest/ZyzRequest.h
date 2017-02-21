//
//  ZyzRequest.h
//  zyz_zhang
//
//  Created by zhangyuze on 15/12/11.
//  Copyright © 2015年 zhangyuze. All rights reserved.
//
//  @author             --->    Zyz_zhang
//
//  @modification Time  --->    2016-01-05 22:51:11
//
//  @since              --->    1.0.8
//
//  @warning            --->    !!! < AFNetworking 二次封装 使用时 需要导入 AFNetworking 网路库  > !!!


#import <Foundation/Foundation.h>

/*! ---------------------- Tool       ---------------------- !*/
#import <AFNetworking/AFNetworking.h>     // AFNetworking 网络库
/*! ---------------------- Tool       ---------------------- !*/

NS_ASSUME_NONNULL_BEGIN

/*! ZyzRequest 的请求成功 回调 Block !*/
typedef void(^ZyzResultSuccessHandle)(NSURLSessionDataTask *task, id resultObject);
/*! ZyzRequest 的请求失败 回调 Block !*/
typedef void(^ZyzResultErrorHandle)(NSURLSessionDataTask *task, NSError *error, NSString *errorMessage);

@interface ZyzRequest : NSObject

#pragma mark - ZyzRequest Tool Methods
/*!
 *  @author zyz_zhang, 2016-01-05 22:03:11
 *
 *  @brief  zyzPOST                         ( 请求网络获取数据 <POST> )
 *
 *  @param  URLString                       请求的 url
 *
 *  @param  parameters                      请求 需要传递的参数
 *
 *  @param  encrypt                         请求 是否 对参数加密 (YES 加密 / NO 不加密)
 *
 *  @param  zyzResultSuccess                请求获取数据成功
 *
 *  @param  zyzResultError                  请求获取数据失败
 *
 *  @since  1.0.8
 */
+ (void)zyzPOST:(NSString *)URLString parameters:(NSDictionary *)parameters isEncrypt:(BOOL)encrypt zyzResultSuccess:(ZyzResultSuccessHandle)zyzResultSuccess zyzResultError:(ZyzResultErrorHandle)zyzResultError;


/*!
 *  @author zyz_zhang, 2016-01-05 22:31:06
 *
 *  @brief  zyzPOSTAddFile                  ( 请求网络获上传文件 单文件上传 <POST> )
 *
 *  @param  URLString                       请求的 url
 *
 *  @param  parameters                      请求 需要传递的参数
 *
 *  @param  encrypt                         请求 是否 对参数加密 (YES 加密 / NO 不加密)
 *
 *  @param  fileName                        请求 上传文件的名称 (和后台一致)
 *
 *  @param  fileData                        请求 上传文件的数据流
 *
 *  @param  zyzResultSuccess                请求获取数据成功
 *
 *  @param  zyzResultError                  请求获取数据失败
 *
 *  @since  1.0.8
 */
+ (void)zyzPOSTAddFile:(NSString *)URLString parameters:(NSDictionary *)parameters isEncrypt:(BOOL)encrypt fileName:(NSString *)fileName fileData:(NSData *)fileData zyzResultSuccess:(ZyzResultSuccessHandle)zyzResultSuccess zyzResultError:(ZyzResultErrorHandle)zyzResultError;

/*!
 *  @author zyz_zhang, 2016-01-05 22:35:33
 *
 *  @brief  zyzPOSTAddFiles                 ( 请求网络获上传文件 多文件上传, 文件名称相同使用该方法 <POST> )
 *
 *  @param  URLString                       请求的 url
 *
 *  @param  parameters                      请求 需要传递的参数
 *
 *  @param  encrypt                         请求 是否 对参数加密 (YES 加密 / NO 不加密)
 *
 *  @param  fileName                        请求 上传文件的名称 (和后台一致)
 *
 *  @param  fileDatas                       请求 上传文件的流数组
 *
 *  @param  zyzResultSuccess                请求获取数据成功
 *
 *  @param  zyzResultError                  请求获取数据失败
 *
 *  @since  1.0.8
 */
+ (void)zyzPOSTAddFiles:(NSString *)URLString parameters:(NSDictionary *)parameters isEncrypt:(BOOL)encrypt fileName:(NSString *)fileName fileDatas:(NSArray *)fileDatas zyzResultSuccess:(ZyzResultSuccessHandle)zyzResultSuccess zyzResultError:(ZyzResultErrorHandle)zyzResultError;

/*!
 *  @author zyz_zhang, 2016-01-05 22:42:50
 *
 *  @brief  zyzPOSTAddWithFiles             ( 请求网络获上传文件 多文件上传, 文件名称不相同相同使用该方法  <POST> )
 *
 *  @param  URLString                       请求的 url
 *
 *  @param  parameters                      请求 需要传递的参数
 *
 *  @param  encrypt                         请求 是否 对参数加密 (YES 加密 / NO 不加密)
 *
 *  @param  fileNames                       请求 上传文件的名称数组 (和后台一致)
 *
 *  @param  fileDatas                       请求 上传文件的流数组
 *
 *  @param  zyzResultSuccess                请求获取数据成功
 *
 *  @param  zyzResultError                  请求获取数据失败
 *
 *  @since  1.0.8
 */
+ (void)zyzPOSTAddWithFiles:(NSString *)URLString parameters:(NSDictionary *)parameters isEncrypt:(BOOL)encrypt fileNames:(NSArray *)fileNames fileDatas:(NSArray *)fileDatas zyzResultSuccess:(ZyzResultSuccessHandle)zyzResultSuccess zyzResultError:(ZyzResultErrorHandle)zyzResultError;

/*!
 *  @author zyz_zhang, 2015-12-11 17:24:00
 *
 *  @brief  ZyzRequestAFNetworkingTest  ( AFNetworking 测试方法 )
 *
 *  @param  URLString                   请求的 url
 *
 *  @param  parameters                  请求 需要传递的参数
 *
 *  @param  encrypt                     请求 是否 对参数加密 (YES 加密 / NO 不加密)
 *
 *  @since  1.0.7
 */
+ (void) zyzRequestAFNetworkingTest:(NSString *)URLString parameters:(NSDictionary *)parameters isEncrypt:(BOOL)encrypt;
@end
NS_ASSUME_NONNULL_END



