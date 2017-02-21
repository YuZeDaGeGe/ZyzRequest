pod::Spec.new do [s]
	s.name		='ZyzRequest'
	s.version	='1.0.0'
	s.summary	='Based on the afn secondary packaging'
	s.homepage	='https://github.com/zhangyuze2015/ZyzRequest'
	s.license	='MIT'
	s.authors	='87806118@qq.com'
	s.platform	=:ios, '8.0'
	s.source 	={:git => 'https://github.com/zhangyuze2015/ZyzRequest.git', :tag => s.version}
	s.source_files	='ZyzRequest/*'
	s.requires_arc  =true
end
