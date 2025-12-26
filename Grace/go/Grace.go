package main

import (
	"fmt"
	"os"
)

func main() {
	template := "package main\n\nimport (\n\t\"fmt\"\n\t\"os\"\n)\n\nfunc main() {\n\ttemplate := %q\n\tfmt.Printf(template, template)\n\tos.WriteFile(\"Grace_kid.go\", []byte(fmt.Sprintf(template, template)), 0644)\n}\n"

	fmt.Printf(template, template)
	os.WriteFile("Grace_kid.go", []byte(fmt.Sprintf(template, template)), 0644)
}
