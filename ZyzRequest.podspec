Pod::Spec.new do |s|
  s.name                  = "ZyzRequest"
  s.version               = '0.0.1'
  s.ios.deployment_target = '7.0'
  s.summary               = " YouZhi Network Request API "
  s.homepage              = "https://github.com/zhangyuze2015/ZyzRequest"
  s.license               = { :type => "MIT", :file => "LICENSE" }
  s.author                = { "zyz-zhang" => "87806118@qq.com" }
  s.source_files          = "ZyzRequest/**/*.{h,m}"
  s.requires_arc          = true
  s.framework             = "Foundation"
  s.dependency "AFNetworking"
  s.dependency "Base64nl"
s.source        ={:git => 'https://github.com/zhangyuze2015/ZyzRequest.git'}
s.source_files  ='ZyzRequest/**/*.{h,m}'

end
